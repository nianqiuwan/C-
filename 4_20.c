#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d", ret);
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	calc(Add);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	// 函数调用，调用是0作为地址处的函数
//	// (void(*)())是强制类型转换
//	// 把0强制类型转换为无参，返回类型是void函数的地址
//	// 调用0地址处的这个函数
//	return 0;
//}


//typedef void(*pf_t)(int);// 把void(*)(int)类型重命名为pf_t
//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//	// 这是一次函数声明
//	// signal 是函数名
//	// signal第一个参数是int，第二个参数类型是函数指针，
//	// 该函数指针指向的函数参数是int
//	// 返回类型是void，signal函数的返回类型也是一个函数指针，
//	// 该函数指针指向的参数是int，返回类型是void
//	pf_t signal(int, pf_t);
//	return 0;
//}

// 穷哈哈
//int main() {
//    int N;
//    scanf("%d", &N);
//    getchar();
//    char S[100000];
//    if (N == 0)
//    {
//        printf("%d", 0);
//        return 0;
//    }
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%c", &S[i]);
//    }
//    int max_len = 0;
//    int current_len = 0;
//    for (int i = 0; i < N; ++i)
//    {
//        if (S[i] == 'a' || S[i] == 'h')
//        {
//            if (i == 0 || S[i] != S[i - 1])
//            {
//                current_len++;
//            }
//            else {
//                current_len = 1;
//            }
//        }
//        else
//        {
//            current_len = 0;
//        }
//        if (current_len > max_len)
//        {
//            max_len = current_len;
//        }
//    }
//    printf("%d", max_len);
//    return 0;
//}