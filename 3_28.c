#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // sqrt的头文件

// 打100到200之间的素数
// 素数是只能被1和他本身整除的数
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2到i-1之间的数字除i
//		int flag = 1;// flag是1,表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i) - 1;j++)
//			// sqrt是数学库函数开平方
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

 //写一个函数判断一个数是不是素数

#include <stdio.h>
#include <math.h>  // 要用 sqrt 必须加这个头文件

void is_prime(int n)
{
    // 小于等于1的都不是素数
    if (n <= 1)
    {
        printf("否\n");
        return;  // 直接结束函数
    }

    int j = 0;
    for (j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            printf("否\n");
            return;  // 找到因数，直接结束
        }
    }

    // 循环结束都没找到因数，就是素数
    printf("是\n");
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    is_prime(n);

    return 0;
}