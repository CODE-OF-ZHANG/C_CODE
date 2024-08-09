#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 不是素数
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 不是素数
        }
    }

    return 1; // 是素数
}

int main2() {
    for (int i = 100; i <= 200; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}