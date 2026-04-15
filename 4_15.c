#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 判断当前机器内存存储是大端还是小端
	int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}


	return 0;
}