#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
// 模拟实现库函数strcpy

//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = { 0 };
//	strcpy(str2, str1);
//	printf("%s", str2);
//	return 0;
//}

//char* my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char str1[] = "hello c";
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
		;
	return ret;
}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}

