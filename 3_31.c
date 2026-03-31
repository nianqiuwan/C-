#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//// 求最大公约数
//// 辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//
//
//	return 0;
//}

//// 数1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int quantity = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			quantity++;
//		}
//		if (i / 10 == 9)
//		{
//			quantity++;
//		}
//
//	}
//	printf("%d\n",quantity);
//
//	return 0;
//}

//// 计算1/1-1/2...+1/99-1/100的值，打印结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//// 10个整数中最大值
//int main()
//{
//	int arr[10] = {1,2,3,4,5,11,7,8,9,10};
//	int i = 0;
//	int max = arr[0];// 注意要赋值，否则数组中有负数最大值为0
//	for (i =0 ;i <= 10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//
//	return 0;
//}

//// 打印9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

