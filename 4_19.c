#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 将一个有序数组中的奇数放前半部分偶数放后半部分
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 输入
//	for (int i = 0;i < sz;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 交换
//	move_odd_even(arr, sz);
//	// 输出
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
// return 0;
//}



// 将两个有序数组合并
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	int i = 0;
//	// 输入
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	// 合并并打印
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{ 
//			printf("%d ",arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (;j < n;j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (;k < m;k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}

// 有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n/2, 如果n为奇数，就将他变为乘3加1
// 不断重复这样的运算，经过有限步之后，一定可以得到1
// 牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1
//int main() {
//    int n;
//    int count = 0;
//    scanf("%d", &n);
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n /= 2;
//            count++;
//        }
//        else {
//            n *= 3;
//            n += 1;
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

// 打印1到n除了包含4或者4的倍数
//int main() {
//    int n;
//    scanf("%d", &n);
//    int m = n;
//    for (int i = 1;i <= n;i++)
//    {
//        int a = 0;
//        if (i % 4 != 0)
//        {
//            int c = i;
//            while (c)
//            {
//                if (c % 10 == 4)
//                {
//                    a = 1;
//                }
//                c /= 10;
//            }
//            if (a == 0)
//            {
//                printf("%d\n", i);
//            }
//        }
//    }
//    return 0;
//}

// 打印n到m之间的水仙花数
#include <math.h>
//int main() {
//    int n, m;
//    int a = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = n;i <= m;i++)
//    {
//        int sum = 0;
//        int tmp = i;
//        while (tmp)
//        {
//            sum += pow(tmp % 10, 3);
//            tmp /= 10;
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//            a++;
//        }
//    }
//    if (a == 0)
//    {
//        printf("no");
//    }
//    return 0;
//}

// 输出1到n，x出现多少次
//int main() {
//    int n, x;
//    scanf("%d %d", &n, &x);
//    int count = 0;
//    for (int i = 1;i <= n;i++)
//    {
//        int tmp = i;
//        int a = 0;
//        while (tmp)
//        {
//            a++;
//            tmp /= 10;
//        }
//        tmp = i;
//        if (tmp == 10&& tmp==x)
//        {
//            count++;
//        }
//        while (a--)
//        {
//            if (tmp % 10 == x)
//            {
//                count++;
//            }
//            tmp /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
