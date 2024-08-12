#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
// 递归和非递归分别实现strlen

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

size_t my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

//int main()
//{
//	char arr[] = "abcdef";
//	// printf("%zd\n", strlen(arr));
//	size_t ret = my_strlen(arr);
//	printf("%zd\n", ret);
//	return 0;
//}
