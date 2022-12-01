#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <Mmsystem.h>
#pragma comment ( lib, "Winmm.lib" )

/*
* 隐藏控制台光标
*/
void HideTheCursor() {
	CONSOLE_CURSOR_INFO cciCursor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	if (GetConsoleCursorInfo(hStdOut, &cciCursor)) {
		cciCursor.bVisible = FALSE;
		SetConsoleCursorInfo(hStdOut, &cciCursor);
	}
}

/*
* 播放线程
*/
unsigned _stdcall thread_play(LPVOID lpParam) {
	char sz_command[126] = {0};
	char sz_cur_play[32] = {0};

	/*打开mp3文件*/
	sprintf(sz_command, "open \"key\\%c.mp3\" alias key_%c", (WORD)lpParam, (WORD)lpParam);
	mciSendString(sz_command, 0, 0, 0 );

	sprintf(sz_cur_play, "key_%c", (WORD)lpParam);

	/*播放*/
	sprintf(sz_command, "play %s", sz_cur_play);
	mciSendString(sz_command, 0, 0, 0 );

	/*3秒后关闭*/
	Sleep(3000);
	sprintf(sz_command, "close %s", sz_cur_play);
	mciSendString(sz_command, 0, 0, 0);

	return 0;
}

int main() {
	/*标准输入句柄*/
	HWND h_console_in;

	/*输入记录*/
	INPUT_RECORD input_rec;
	DWORD res;

	/*线程句柄*/
	HANDLE h_thread_play = INVALID_HANDLE_VALUE;
	unsigned id_thread_play;

	printf("欢迎来到键盘钢琴！！\n\n");

	HideTheCursor();

	/*获取标准输入句柄，并设置为接受输入*/
	h_console_in = GetStdHandle(STD_INPUT_HANDLE);
	SetConsoleMode(h_console_in, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);

	while (1) {
		/*读取一个输入*/
		ReadConsoleInput(h_console_in, &input_rec, 1, &res);

		/*刷新输入缓冲区*/
		FlushConsoleInputBuffer(h_console_in);

		/*输入事件为按键输入，且按键按下时*/
		if (input_rec.EventType == KEY_EVENT && input_rec.Event.KeyEvent.bKeyDown == TRUE) {
			/*输入的是A-Z之间的按键*/
			if (input_rec.Event.KeyEvent.wVirtualKeyCode >= 'A'
			        && input_rec.Event.KeyEvent.wVirtualKeyCode <= 'Z') {
				/*将当前按键作为参数，开线程*/
				h_thread_play = (HANDLE)_beginthreadex(NULL, 0, &thread_play,
				                                       (void *)input_rec.Event.KeyEvent.wVirtualKeyCode, 0, &id_thread_play);
			}
		}
	}
}