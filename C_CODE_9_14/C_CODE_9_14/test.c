#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

////void bubble_sort(int arr[], int len)
////{
////	for (int i = 0; i < len; i++)
////	{
////		for (int j = 0; j < len - i - 1; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//
//void Print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////void qsort(void* base, size_t num, size_t size,
////	int (*compar)(const void*, const void*));
//
//int compare(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	// bubble_sort(arr, len);
//	qsort(arr, len, sizeof(arr[0]), compare);
//	
//	Print(arr, len);
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//
//extern int linklist_insert(void* nodedata);
//
//typedef struct DataInfo {
//	char* name;
//	int score;
//}DataInfo_t;
//
//int test_func(char* name, int score)
//{
//	if (!name)
//		return -1;
//	static DataInfo_t* info = (DataInfo_t*)malloc(sizeof(DataInfo_t));
//	if (!info)
//		return -1;
//	info->name = strdup(name);
//	info->score = score;
//
//	DataInfo_t* nodedata = info;
//	linklist_insert(nodedata);
//
//	if (nodedata->name)
//	{
//		free(nodedata->name);
//		nodedata->name = NULL;
//	}
//
//	free(nodedata);
//	nodedata = NULL;
//
//	return 0;
//}
//
//
//int main(int argc, char* argv[])
//{
//	test_func("Bob", 9);
//	test_func("Alex", 100);
//
//	return 0;
//}


//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


void Swap(char* buf1, char* buf2, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t nums, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < nums; i++)
	{
		for (int j = 0; j < nums - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//int tmp = arr[j];
				//arr[j] = arr[j + 1];
				//arr[j + 1] = tmp;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//void qsort(void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));


//int compare(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}

int com_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

typedef struct Student
{
	char name[20];
	int age;
}stu;


int com_stu(const void* p1, const void* p2)
{
	return strcmp(((stu*)p1)->name, ((stu*)p2)->name);
}

//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	stu stArr[3] = { {"zhangsan", 18}, {"lisi", 20}, {"wangwu", 22} };
//	int sz = sizeof(stArr) / sizeof(stArr[0]);
//	// bubble_sort(arr, len);
//	// qsort(arr, len, sizeof(arr[0]), compare);
//	// bubble_sort(arr, len, sizeof(arr[0]), com_int);
//	bubble_sort(stArr, sz, sizeof(stArr[0]), com_stu);
//
//	print(arr, len);
//	return 0;
//}
