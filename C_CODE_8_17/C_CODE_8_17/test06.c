#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ���������������е����У����������кϲ�Ϊһ���������в������

//int main() {
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[2000];
//    for (int i = 0; i < n + m; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = n; i < m; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < n + m; i++) {
//        for (int j = 0; j < n + m - i - 1; j++) {
//            if (arr1[j] > arr1[j + 1]) {
//                int tmp = arr1[j];
//                arr1[j] = arr1[j + 1];
//                arr1[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n + m; i++) {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}