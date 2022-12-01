#include <cstdio>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <vector>
#include <string>

void set_cursor(bool hide) { // ����/��ʾ ���
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo); // ��ȡ����̨�����Ϣ
	CursorInfo.bVisible = hide;				   // ���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo); // ���ÿ���̨���״̬
}

void gotoxy(int x, int y) { // ���ù��
	COORD c = {(SHORT)x, (SHORT)y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void setmode() {
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE; // �Ƴ����ٱ༭ģʽ
	// mode &= ~ENABLE_INSERT_MODE;	 // �Ƴ�����ģʽ
	// mode &= ~ENABLE_MOUSE_INPUT;
	SetConsoleMode(hStdin, mode);
}

struct Click {
	int x, y;
	int delay;
	int button_down, button_up;
	std::string msg;
};

int main() {
	setmode();
	std::printf("��ӭʹ�������������\n\n");
_ReStart_: // ���¿�ʼ�ĵط�
	std::system("mode con cols=40 lines=15");
	set_cursor(true);
	SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE); // �����ö�
	std::puts("��ѡ��ģʽ��");
	std::puts("  1. ���λ��Ϊ���ָ�룬�����/�Ҽ����");
	std::puts("  2. ���λ�ù̶�ѭ���������/�Ҽ����");
	std::puts("  0. �˳�");
	int ch = _getch();
	while (ch < '0' || ch > '2')
		ch = _getch();
	std::system("cls");
	set_cursor(false);
	if (ch == '1') {
		set_cursor(true);
		std::puts("���ã�");
		std::printf("������ÿ���ӵĵ������(1��1000)��");
		int spd;
		std::scanf("%d", &spd);
		std::printf("\n��ѡ�����ļ�(0�����1�Ҽ�)��");
		ch = _getch();
		while (ch < '0' || ch > '1')
			ch = _getch();
		int CLICK_BUTTON_DOWN = (ch == '0' ? MOUSEEVENTF_LEFTDOWN : MOUSEEVENTF_RIGHTDOWN);
		int CLICK_BUTTON_UP = (ch == '0' ? MOUSEEVENTF_LEFTUP : MOUSEEVENTF_RIGHTUP);
		std::system("cls");
		int cont = true, lst_tim = clock();
		set_cursor(false);
		while (true) {
			gotoxy(0, 0);
			std::printf("������%s. . . \n\n", cont ? "������" : "����ͣ");
			std::printf("�ٶȣ�%d��/��\n", spd);
			std::printf("  �ո��\t%s\n", cont ? "��ͣ" : "����");
			std::printf("  Esc�� \t�˳�\n");
			SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE); // �����ö�
			if (_kbhit()) {
				int ch = _getch();
				if (ch == 27) { // Esc
					break;
				} else if (ch == ' ') { // �ո�
					cont = !cont;
				}
			} else {
				if (cont) {
					if (clock() - lst_tim >= 1.0 / spd * CLOCKS_PER_SEC) {
						lst_tim = clock();
						POINT pt;
						GetCursorPos(&pt);
						mouse_event(CLICK_BUTTON_DOWN, 0, 0, 0, 0);
						mouse_event(CLICK_BUTTON_UP, 0, 0, 0, 0);
					}
				}
			}
		}
	} else if (ch == '2') {
		std::printf("��������Ҫ�����λ�ø�����");
		int times;
		std::scanf("%d", &times);
		std::vector<Click> ps;
		set_cursor(true);
		for (int i = 1; i <= times; i++) {
			std::system("cls");
			std::printf("������ƶ�����%d��λ���Ϻ��¿ո�", i);
			while (_getch() != ' ') {}
			POINT p;
			GetCursorPos(&p);
			ps.push_back({p.x, p.y, 0, 0, 0, ""});
			std::printf("\n��Ҫ���µļ�(0�����1�Ҽ�)��");
			char ch = _getch();
			while (ch < '0' || ch > '1')
				ch = _getch();
			ps.back().button_down = (ch == '0' ? MOUSEEVENTF_LEFTDOWN : MOUSEEVENTF_RIGHTDOWN);
			ps.back().button_up = (ch == '0' ? MOUSEEVENTF_LEFTUP : MOUSEEVENTF_RIGHTUP);
			std::printf("\n����һ�ε������Ҫ�ȴ����ٺ��룺");
			int delay;
			std::scanf("%d", &delay);
			ps.back().delay = delay;
			std::printf("\n�����������ɲ����");
			char msg[10000];
			gets(msg);
			gets(msg);
			ps.back().msg = msg;
		}
		int cont = true;
		int now = 0;
		int lst_tim = clock();
		std::system("cls");
		set_cursor(false);
		while (true) {
			gotoxy(0, 0);
			std::printf("������%s. . . \n\n", cont ? "������" : "����ͣ");
			std::printf("��ǰλ��������%s\n", ps[now].msg.c_str());
			std::printf("��Ҫ�ȴ���%d��\n", ps[now].delay);
			std::printf("���������%s��\n", (ps[now].button_down == MOUSEEVENTF_LEFTDOWN ? "��" : "��"));
			std::printf("  �ո��\t%s\n", cont ? "��ͣ" : "����");
			std::printf("  Esc�� \t�˳�\n");
			SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE); // �����ö�
			if (_kbhit()) {
				int ch = _getch();
				if (ch == 27) { // Esc
					break;
				} else if (ch == ' ') { // �ո�
					cont = !cont;
				}
			} else {
				if (cont) {
					if (clock() - lst_tim > ps[now].delay) {
						lst_tim = clock();
						POINT pt;
						GetCursorPos(&pt);
						SetCursorPos(ps[now].x, ps[now].y);
						mouse_event(ps[now].button_down, 0, 0, 0, 0);
						mouse_event(ps[now].button_up, 0, 0, 0, 0);
						SetCursorPos(pt.x, pt.y);
						if (now + 1 == (int)ps.size())
							now = 0;
						else
							now = now + 1;
					}
				}
			}
		}
	} else
		return 0;
	std::system("cls");
	std::printf("��ӭ������\n\n");
	goto _ReStart_;
	return 0;
}