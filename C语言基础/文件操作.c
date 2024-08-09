#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf;  // 创建文件指针变量
//	pf = fopen("test.txt", "w");  // 打开文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 文件操作
//	fputs("hello world", pf);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	char ch = 0;
//	for (ch = 'A'; ch <= 'Z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fputs("hello", pf);
//	fputs("abcdefghi", pf);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三", 19, 89.5f };
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三", 19, 89.5f };
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	// 打印到屏幕上
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fwrite(arr, sizeof(arr[0]), sz, pf);  // 以二进制的形式写入 
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	fread(arr, sizeof(arr[0]), 5, pf);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// fseek(pf, 5, SEEK_SET);// f
//	// fseek(pf, 4, SEEK_CUR);// f
//	fseek(pf, -4, SEEK_END);// f
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	fseek(pf, -4, SEEK_END);// f
//	printf("%d\n", ftell(pf));
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	fseek(pf, -4, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// f
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	// 导致读取结束的原因
//	if (feof(pf))
//	{
//		printf("遇到文件末尾，正常结束");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");
//	}
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}