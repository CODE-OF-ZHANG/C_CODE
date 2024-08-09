#define _CRT_SECURE_NO_WARNINGS 1

// 需求：输出为一行，输出长度为n+m的升序序列，
// 即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d\n", &a, &b) != EOF) {
//        int tmp;
//        int i, j, arr[2000];
//        for (i = 0; i < a; i++) {
//            scanf("%d ", &arr[i]);
//        }
//        for (i = a; i < a + b; i++) {
//            scanf("%d ", &arr[i]);
//        }
//        for (i = 0; i < a + b; i++) {
//            for (j = 0; j < a + b - i - 1; j++) {
//                if (arr[j] > arr[j + 1]) {
//                    tmp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = tmp;
//                }
//            }
//        }
//        for (i = 0; i < a + b; i++) {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
