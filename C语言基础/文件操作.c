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
//	FILE* pf;  // �����ļ�ָ�����
//	pf = fopen("test.txt", "w");  // ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// �ļ�����
//	fputs("hello world", pf);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	char ch = 0;
//	for (ch = 'A'; ch <= 'Z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	fputs("hello", pf);
//	fputs("abcdefghi", pf);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//	// �ر��ļ�
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
//	struct S s = { "����", 19, 89.5f };
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	// �ر��ļ�
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
//	struct S s = { "����", 19, 89.5f };
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	// ��ӡ����Ļ��
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fwrite(arr, sizeof(arr[0]), sz, pf);  // �Զ����Ƶ���ʽд�� 
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	fread(arr, sizeof(arr[0]), 5, pf);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// fseek(pf, 5, SEEK_SET);// f
//	// fseek(pf, 4, SEEK_CUR);// f
//	fseek(pf, -4, SEEK_END);// f
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	fseek(pf, -4, SEEK_END);// f
//	printf("%d\n", ftell(pf));
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	fseek(pf, -4, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// f
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	// ���¶�ȡ������ԭ��
//	if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����������");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");
//	}
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}