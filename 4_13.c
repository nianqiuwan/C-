#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//// 字符串逆向
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	printf("%s", arr);
//}

// 求a的n项之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int k = 0;
//	for (int i = 0;i < n;i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//#include <math.h>
//// 求出0到100000之间所有的水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100000;i++)
//	{
//		int sum = 0;
//		// 1.计算i是几位数
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		// 2.得到i每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 打印菱形
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j <= i ;j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0;j <2*(n-1-i)-1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 喝汽水，1元1瓶汽水，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int count = 0;
//	//int total = 0;
//	//for (int i = 0;i < money;i++)
//	//{
//	//	count++;
//	//	total++;
//	//	if (total % 2 == 0)
//	//	{
//	//		total++;
//	//		count++;
//	//	}
//	//}
//	if (money != 0)
//		printf("%d", money * 2 - 1);
//	else
//		printf("%d", 0);
//
//	return 0;
//}

// 计算a和b公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", i*a);
//	return 0;
//}

//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	// 输入
//	char arr[101] = { 0 };
//	fgets(arr,sizeof(arr),stdin);
//	arr[strcspn(arr, "\n")] = '\0';
//	// 逆置
//	int len = strlen(arr);
//	// 1.逆置整个字符串
//	reverse(arr, arr + len - 1);
//	// 2.逆置每个单词
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	// 输出
//	printf("%s\n", arr);
//	return 0;
//}