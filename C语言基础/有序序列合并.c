#define _CRT_SECURE_NO_WARNINGS 1

// �������Ϊһ�У��������Ϊn+m���������У�
// ������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���
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
