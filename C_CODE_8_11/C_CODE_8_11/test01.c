#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void shutdown() {
	system("shutdown -s -t 60");
}

int guess = 0;
void game() {
	// 第一步：生成随机数
	int r = rand() % 100 + 1;
	// 第二部：猜数字
	shutdown();
	while (1)
	{
		printf("请猜数字:>>>");
		scanf("%d", &guess);
		if (guess != r)
		{
			if (guess > r)
			{
				printf("猜大了\n");
			}
			else if (guess < r) {
				printf("猜小了\n");

			}
		}
		else
		{
			printf("恭喜你，猜对了! \n");
			system("shutdown -a");
			break;
		}
	}
}

//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("**** 猜数字游戏 ****\n");
//		printf("***** 0. exit ******\n");
//		printf("***** 1. play *****\n");
//		printf("*******************\n");
//		printf("请选择:>>>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
