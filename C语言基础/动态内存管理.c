#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int var = 20;  // ��ջ�ռ��Ͽ���4���ֽ�
//	char arr[10] = { 0 };  // ��ջ�ռ��Ͽ���10���ֽڵ������ռ�
//	return 0;
//}

//int main()
//{
//	// ����20���ֽڵĿռ�
//	int* p = (int*)malloc(20);
//	if (p == NULL)  // �ж��Ƿ�Ϊ��ָ��
//	{
//		perror("malloc");
//		return 1;
//	}
//	// ��Ϊ��ָ��Ϳ���ʹ��
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	// �ڴ���ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));  // ����5�����δ�С�Ŀռ�
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));  // ����5�����δ�С�Ŀռ�
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", *p);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));  // ����ռ�
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	// �����ռ��С, ����Ϊ40���ֽڿռ��С
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		for (int i = 5; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//		// ��ӡ
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else  // ����ʧ��
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;  //���p��ֵ��NULL���ͻ�������
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i <= 10; i++)
//		{
//			*(p + i) = i + 1;  //��i��10��ʱ��Խ�����
//		}
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	// ...
//	free(p);
//	free(p);  // �ظ��ͷ�
//}
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	while (1);
//	return 0;
//}



//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}



//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//struct S
//{
//	int i;
//	int arr[0];  // ���������Ա
//	//��Щ�������ᱨ���޷�������Ըĳɣ�int arr[];
//};

//struct S
//{
//	int n;//4���ֽ�
//	int arr[];//��������
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	int n;//4���ֽ�
//	int arr[];//��������
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// �ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	if (ps->arr == NULL)
//		return 1;
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// �����ռ��С
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr == NULL)
//		return 1;
//	ps->arr = ptr;
//	// ʹ��
//	//...
//
//	// �ͷ�
//	free(ps->arr);
//	free(ps);
//	return 0;
//}