#include <stdio.h>
#include <stdlib.h>

int main() {

	enum color { red = 1, green, blue };

	enum  color favorite_color;

	/* �û�����������ѡ����ɫ */
	printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
	scanf("%u", &favorite_color);
	//u���޷������������Ի���%d����Ϊö����Ĭ������Ϊ��ͷ����ȻҲ���Զ���Ϊ������

	/* ������ */
	switch (favorite_color) {
		case red:
			printf("��ϲ������ɫ�Ǻ�ɫ");
			break;
		case green:
			printf("��ϲ������ɫ����ɫ");
			break;
		case blue:
			printf("��ϲ������ɫ����ɫ");
			break;
		default:
			printf("��û��ѡ����ϲ������ɫ");
	}

	return 0;
}