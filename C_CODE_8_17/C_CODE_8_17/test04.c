#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。
// (当两个矩阵对应数组元素都相等时两个矩阵相等)。

//int main() {
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[n][m];
//    int arr2[n][m];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                return 0;
//            }
//        }
//    }
//    printf("Yes\n");
//    return 0;
//}
