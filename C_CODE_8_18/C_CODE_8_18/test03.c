#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char str[] = "hello world";
//	size_t ret = strlen(str);
//	printf("%zd\n", ret);
//	return 0;
//}

size_t my_strlen(const char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


//int main()
//{
//	char str[] = "hello world";
//	size_t ret = my_strlen(str);
//	printf("%zd\n", ret);
//	return 0;
//}
