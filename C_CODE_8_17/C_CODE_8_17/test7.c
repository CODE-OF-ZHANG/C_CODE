#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 输入一个整数序列，判断是否是有序序列，有序，
// 指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。

//int main() {
//    int n = 0, cnt1 = 0, cnt2 = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++) {
//        if (arr[i] - arr[i + 1] >= 0) {
//            cnt1++;
//        }
//        else if (arr[i] - arr[i + 1] <= 0) {
//            cnt2++;
//        }
//    }
//    if ((cnt1 == (n - 1)) || (cnt2 == (n - 1))) {
//        printf("sorted\n");
//    }
//    else {
//        printf("unsorted\n");
//    }
//    return 0;
//}
