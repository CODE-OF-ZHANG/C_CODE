#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<stdlib.h>
//
//void Shutdown() {
//	system("shutdown -s -t 60");
//}
//
//int guess = 0;
//void Game() {
//	// ��һ�������������
//	int r = rand() % 100 + 1;
//	// �ڶ�����������
//	Shutdown();
//	while (1)
//	{
//		printf("�������:>>>");
//		scanf("%d", &guess);
//		if (guess != r)
//		{
//			if (guess > r)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < r) {
//				printf("��С��\n");
//
//			}
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���! \n");
//			system("shutdown -a");
//			break;
//		}
//	}
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("**** ��������Ϸ ****\n");
//		printf("***** 0. exit ******\n");
//		printf("***** 1. play *****\n");
//		printf("*******************\n");
//		printf("��ѡ��:>>>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			Game();
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}