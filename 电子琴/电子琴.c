#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <Mmsystem.h>
#pragma comment ( lib, "Winmm.lib" )

/*
* ���ؿ���̨���
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
* �����߳�
*/
unsigned _stdcall thread_play(LPVOID lpParam) {
	char sz_command[126] = {0};
	char sz_cur_play[32] = {0};

	/*��mp3�ļ�*/
	sprintf(sz_command, "open \"key\\%c.mp3\" alias key_%c", (WORD)lpParam, (WORD)lpParam);
	mciSendString(sz_command, 0, 0, 0 );

	sprintf(sz_cur_play, "key_%c", (WORD)lpParam);

	/*����*/
	sprintf(sz_command, "play %s", sz_cur_play);
	mciSendString(sz_command, 0, 0, 0 );

	/*3���ر�*/
	Sleep(3000);
	sprintf(sz_command, "close %s", sz_cur_play);
	mciSendString(sz_command, 0, 0, 0);

	return 0;
}

int main() {
	/*��׼������*/
	HWND h_console_in;

	/*�����¼*/
	INPUT_RECORD input_rec;
	DWORD res;

	/*�߳̾��*/
	HANDLE h_thread_play = INVALID_HANDLE_VALUE;
	unsigned id_thread_play;

	printf("��ӭ�������̸��٣���\n\n");

	HideTheCursor();

	/*��ȡ��׼��������������Ϊ��������*/
	h_console_in = GetStdHandle(STD_INPUT_HANDLE);
	SetConsoleMode(h_console_in, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);

	while (1) {
		/*��ȡһ������*/
		ReadConsoleInput(h_console_in, &input_rec, 1, &res);

		/*ˢ�����뻺����*/
		FlushConsoleInputBuffer(h_console_in);

		/*�����¼�Ϊ�������룬�Ұ�������ʱ*/
		if (input_rec.EventType == KEY_EVENT && input_rec.Event.KeyEvent.bKeyDown == TRUE) {
			/*�������A-Z֮��İ���*/
			if (input_rec.Event.KeyEvent.wVirtualKeyCode >= 'A'
			        && input_rec.Event.KeyEvent.wVirtualKeyCode <= 'Z') {
				/*����ǰ������Ϊ���������߳�*/
				h_thread_play = (HANDLE)_beginthreadex(NULL, 0, &thread_play,
				                                       (void *)input_rec.Event.KeyEvent.wVirtualKeyCode, 0, &id_thread_play);
			}
		}
	}
}