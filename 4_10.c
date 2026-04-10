#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;// pa是一个指针变量，一级指针变量
//	int** ppa = &pa;// ppa是一个二级指针
//	return 0;
//}

// 数组指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	// 存放指针的数组
//	// 指针数组
//	int* parr[10] = { &a,&b,&c };
//	return 0;
//}

// 求一个整型中1的个数
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d", n);
//}

//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d", n);
//}

//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d", n);
//}

// 求两个整数二进制中有多少位不同
//int count_diff_onr(int n, int m)
//{
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if (((n >> i) & 1) != ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int count = count_diff_onr(n, m);
//	printf("%d", count);
//}

//int count_diff_onr(int n, int m)
//{
//	int count = 0;
//	int ret = n ^ m;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int count = count_diff_onr(n, m);
//	printf("%d", count);
//}

// 打印出一个整数二进制中的奇数位和偶数位
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	for (int i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 31;i >= 0;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

// 打印x形状
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	for (int i = 0;i < num;i++)
//	{
//		for (int j = 0;j < num;j++)
//		{
//			if (i == j)
//			{
//				printf("*");
//			}
//			else if (i + j == num - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 获取月份天数
//int is_leep_yea(int y)
//{
//	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,30,31,30,31};
//
//	while ((scanf("%d %d", &y, &m) == 2))
//	{
//		int d = days[m];
//		if ((is_leep_yea(y) == 1) && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}