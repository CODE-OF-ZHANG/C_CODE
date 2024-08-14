#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 二进制中1的个数

int NumberOf1(int n) {
    // write code here
    int count = 0;
    while (n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = NumberOf1(n);
//    printf("%d\n", ret);
//    return 0;
//}
