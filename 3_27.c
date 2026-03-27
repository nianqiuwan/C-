#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main() 
//{
//	float f = 0.0f;
//	// 0.0默认是double类型所以后面加个f
//
//
//	return 0;
//}

//int main()
//{
//	int height = 0.0f;	// 定义身高变量
//	int weight = 0.0f;	// 定义体重变量
//	scanf("%d %d", &weight, &height);// 注意变量别写反
//	float BMI = weight / (height / 100.0) / (height / 100.0);
//	printf("%.2f\n", BMI);// 注意%2中间要加.
//	return 0;
//}


//int main()
//{
//	// 在一个有序的数组中找n
//	// 定义一个有序数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 获取数组长度
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 定义开始寻找的最小值
//	int left = 0;
//	// 定义开始寻找的最大值
//	int right = sz - 1;
//	// 定义一个需要寻找的值
//	int num = 0;
//	scanf("%d", &num);// 注意不能带\n不然会需要输入两遍
//	// 开始寻找
//	while (left <= right)
//	{
//		// 定义一个平均值
//		int mid = (right + left) / 2;
//		// 开始判断
//		// 如果平均值大于找值
//		if (arr[mid] > num) 
//		{
//			// 最大值重新赋值为平均值-1
//			right = mid - 1;
//		}
//		// 如果小于平均值
//		else if (arr[mid] < num)
//		{
//			// 最小值重新赋值为平均值+1
//			left = mid + 1;
//		}
//		else
//		{
//			// 如果平均值等于找值输出找到了，break退出循环
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	// 如果最小值大于最大值没有值可以找
//	if (left > right)
//	{
//		// 输出找不到
//		printf("找不到");
//	}
//	return 0;
//}


//int main()
//{
//	// 演示多个字符从两端移动，向中间汇聚
//	// 定义输出
//	char arr1[] = "Hello World!";
//	// 定义字符
//	char arr2[] = "############";
//	// 定义数组下标最小值
//	int left = 0;
//	// 定义数组下标最大值
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // 注意没有写下标的数组要减2
//	// 开输出
//	for (int i = 0;i < sizeof(arr1) / sizeof(arr1[0]);i++)
//	{
//		printf("%s\n", arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;// 注意最大值要--
//	}
//
//
//	return 0;
//}

//int main()
//{
//	// 编写代码实现，模拟用户登录场景，并且只能登录3次
//	// 密码正确则登录成功，密码错误则推出程序
//	// 定义密码
//	char password[] = "20071108";
//	// 定义输入
//	char password1[] = "00000000";
//	// 开始输入
//	for (int i = 1;i <= 3;i++)
//	{
//		// 输入密码
//		scanf("%s", &password1);
//		// 开始判断
//		// strcmp比较两个字符串是否相等，相等返回0，不相等返回1
//		if (strcmp(password1,"20071108") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误还有 %d 次\n", 3 - i);
//		}
//	}
//	return 0;
//}

#include <stdlib.h> // rand、srand
#include <time.h>	// time

//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}
//
//// 0到RAND_MAX(32767)
//int num()
//{
//	// 1.生成随机数
//	// 0到99 -->1到100
//	int ret = rand()%100+1;// 生成随机数的函数
//	return ret;
//}
//
//// 指针
//// int *p = NULL; NUll为空
//// int a =0;
//
//int main()
//{
//	menu();
//	// unsigned为将time_t改为int类型
//	srand((unsigned int)time(NULL));
//	// 开始运行
//	for (int i = 0;i <= 1;)
//	{
//		int ret = num();
//		int input = 0;
//		printf("是否开始游戏:>");
//		scanf("%d", &input);
//		if(input == 1)
//		{
//			printf("游戏开始\n");
//			while (1)
//			{
//				int guess = 0;
//				printf("请输入数字:>");
//				scanf("%d", &guess);
//				if (guess > ret)
//				{
//					printf("猜大了\n");
//				}
//				else if (guess < ret)
//				{
//					printf("猜小了\n");
//				}
//				else
//				{
//					printf("猜对了\n");
//					break;
//				}
//			}
//		}
//		else if(input == 0)
//		{
//			printf("游戏退出\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，重新输入\n");
//		}
//	}
//	return 0;
//}

