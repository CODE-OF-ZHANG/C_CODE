#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
// 编写一个函数 reverse_string(char * string)（递归实现）

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	int len = my_strlen(str);
	char tmp = *str;
	(*str) = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
		reverse_string(str + 1);
	*(str + len - 1) = tmp;
}

//int main()
//{
//	char str[] = "abcdef";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
