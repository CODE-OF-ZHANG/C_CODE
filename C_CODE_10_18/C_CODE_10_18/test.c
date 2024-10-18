#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	char* str1 = "abcdef";
//	size_t len = strlen(str1);
//	printf("%zd\n", len);
//	return 0;
//}

//
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	char* cur = str;
//	size_t count = 0;
//	while (*cur != '\0')
//	{
//		count++;
//		cur++;
//	}
//	return count;
//}



size_t my_strlen(const char* s)
{
	assert(s);
	size_t count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return count;
}

int main()
{
	char* str1 = "abcdef";
	size_t len = my_strlen(str1);
	printf("%zd\n", len);
	return 0;
}