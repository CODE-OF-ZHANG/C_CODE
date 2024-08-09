#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 需求：针对每行输入，输出用“*”组成的X形图案。
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a; ++i) {
//            for (int j = 0; j < a; ++j) {
//                if (i == j) {
//                    printf("*");
//                }
//                else if (j == a - i - 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}