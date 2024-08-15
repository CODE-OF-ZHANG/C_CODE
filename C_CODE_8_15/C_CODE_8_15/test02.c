#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 正整数n表示为六进制的结果
// 把十进制数除以6，记录余数，
// 然后用商继续除以6，直到商为0。
// 把所有余数从最后一个到第一个排列，就是六进制数。

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        arr[i] = n % 6;
//        n = n / 6;
//        i++;
//    }
//    for (int j = i - 1; j >= 0; j--)
//    {
//        printf("%d", arr[j]);
//    }
//    return 0;
//}
