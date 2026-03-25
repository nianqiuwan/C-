#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	// printf专门打印数据
//	// printf("...\n");
//	printf("hehe\n");
//	
//	return 0;
//}

//int main() 
//{
//	printf("%zu\n", sizeof(int));
//
//	return 0;
//}



//int a = 100;			// 全局变量
//int main()
//{
//	int a = 10;			// 局部变量
//	printf("a=%d", a);	// 当全局变量和局部变量名字相同情况下，局部变量优先
//
//	return 0;
//}



// 计算两个整数的和
// scanf 输入函数
// printf 输出函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	// 输入两个整数
//	scanf ("%d %d", &num1, &num2);
//	// 求和
//	int sum = num1 + num2;
//	// 输出
//	printf ("%d\n",sum);
//	return 0;
//}


// 声明来自外部的符合
//extern int a;
//
//void test()
//{
//	printf("%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d", a);
//	}
//	printf("a=%d", a);
//	return 0;
//}