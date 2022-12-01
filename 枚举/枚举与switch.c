#include <stdio.h>
#include <stdlib.h>

int main() {

	enum color { red = 1, green, blue };

	enum  color favorite_color;

	/* 用户输入数字来选择颜色 */
	printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
	scanf("%u", &favorite_color);
	//u是无符号整数，可以换成%d，因为枚举是默认以零为开头，当然也可以定义为负数。

	/* 输出结果 */
	switch (favorite_color) {
		case red:
			printf("你喜欢的颜色是红色");
			break;
		case green:
			printf("你喜欢的颜色是绿色");
			break;
		case blue:
			printf("你喜欢的颜色是蓝色");
			break;
		default:
			printf("你没有选择你喜欢的颜色");
	}

	return 0;
}