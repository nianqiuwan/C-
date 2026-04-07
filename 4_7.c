#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 走台阶练习
// 走n个台阶，每次可以选择走2个台阶或1个台阶，求有多少走法
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//	// 计算
//	int m = fib(n);
//	// 输出
//	printf("%d", m);
//	return 0;
//}

//// 序列中删除指定数字
//int main()
//{
//	// 输入数组长度
//	int n = 0;
//	scanf("%d", &n);
//	// 输入整数
//	int arr[50] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//	scanf("%d",&arr[i]);
//	}
//	// 删除指定数字
//	int del = 0;
//	scanf("%d",&del);
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] == del)
//		{
//			for (int j = i;j < n;j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			n--;
//		}
//	}
//	// 输出
//	for (int i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 最高分与最低分之差
//int main()
//{
//	// 输入成绩个数
//	int n = 0;
//	scanf("%d", &n);
//	// 输入成绩
//	int arr[50] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 计算
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int sub = max - min;
//	// 输出
//	printf("%d", sub);
//	return 0;
//}

// 字母大小写转换
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//}


// 求出5位数的Lily Number
//#include <math.h>// 数学库函数
//int main()
//{
//	int i = 0;
//	for (i = 10000;i < 100000;i++)
//	{
//		int sum = 0;
//		int k = 0;
//		for (int j = 1;j <= 4;j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

