#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

void moveZeroes(int* nums, int numsSize) {
    int cur = 0, dest = 0;
    while (cur < numsSize)
    {
        if (nums[cur] == 0)
        {
            cur++;
        }
        else
        {
            int tmp = nums[cur];
            nums[cur] = nums[dest];
            nums[dest] = tmp;
            dest++, cur++;
        }
    }
}

//int main()
//{
//    int arr[] = { 0,1,0,3,12 };
//    int numSize = sizeof(arr) / sizeof(arr[0]);
//    moveZeroes(arr, numSize);
//    for (int i = 0; i < numSize; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//	return 0;
//}
