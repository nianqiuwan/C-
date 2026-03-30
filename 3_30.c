#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//// 布尔类型
//#include <stdbool.h>
//#include <math.h>// sqrt头文件
//
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	// printf在函数中返回字符个数
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//	return 0;
//}


//
//// 接受一个整型值（无符号），按照顺序打印它的每一位。
//// 例如：
//// 输入1234，输出1 2 3 4
//
//// %d 是打印有符号整数（有正负数）
//// %u 是打印无符号整数
//
//// 函数的递归
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);// 再次进入print，函数结束继续执行下面的代码
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}


// 编写函数，求字符长度。

//int my_strlen(char* str)
//{
//	int i = 0;// 计数，临时变量
//	while (*str != '\0')
//	{
//		i++;  // 计算字符数
//		str++;// 找下一个字符
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

// 编写函数不允许创建临时变量，求字符长度。

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);// 计数
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

