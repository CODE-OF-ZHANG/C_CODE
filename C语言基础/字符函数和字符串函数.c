#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<ctype.h>

//int main()
//{
//	char str[] = "Test String.\n";
//	int i = 0;
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (islower(c))
//			c -= 32;
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "Test String.\n";
//	int i = 0;
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (islower(c))
//			c = toupper(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "bbbdfsdfgsd";
//	if ((int)strlen(ch1) > (int)strlen(ch2))
//		printf("ch1 > ch2");
//	else
//		printf("ch1 < ch2");
//	return 0;
//}

//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);  // 断言，避免传入空指针
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(const char* str1)
//{
//	assert(str1);   // 断言，避免传入空指针
//	if (*str1 == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str1 + 1);
//}

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//#include<assert.h>
//#include<stdio.h>
//#include<ctype.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = "xxxxxxxxxxxxxxxxxx";
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	char * ret = my_strcpy(str2, str1);
//	printf("%s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//		dest++;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	// 注意数组空间大小，要足以容纳追加后的字符数量
//	char arr1[20] = "hello ";  
//	char arr2[] = "world";
//	// my_strcat(arr1, arr2);
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abs";
//	char arr3[] = "abcdef";
//	int ret1 = my_strcmp(arr1, arr2);
//	int ret2 = my_strcmp(arr1, arr3);
//	int ret3 = my_strcmp(arr2, arr3);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxxxxxxxxx";
//	strncpy(arr2, arr1, 10);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxx\0xxxxxxxxxxxx";
//	strncat(arr2, arr1, 10);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqdefgui";
//	int ret = strncmp(arr1, arr2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "this is an apple\n";
//	const char arr2[] = "is";
//	char arr3[] = "pa";
//	char* p = strstr(arr1, arr2);
//	char* pa = strstr(arr1, arr3);
//	printf("%s\n", p);
//	printf("%s\n", pa);
//	return 0;
//}

//#include<stdio.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')  // 匹配完成
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;  // 没找到
//}
//
//int main()
//{
//	char arr1[] = "this is an apple\n";
//	const char arr2[] = "is";
//	char arr3[] = "pa";
//	char* p = my_strstr(arr1, arr2);
//	char* pa = my_strstr(arr1, arr3);
//	printf("%s\n", p);
//	printf("%s\n", pa);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "zhangxu@qq.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	const char* sep = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr2, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	// ret = strtok(arr2, sep);
//	// printf("%s\n", ret);
//
//	// ret = strtok(NULL, sep);
//	// printf("%s\n", ret);
//
//	// ret = strtok(NULL, sep);
//	// printf("%s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("%d:\t%s\n", i, strerror(i));
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	return 0;
//}