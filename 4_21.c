#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	// 函数指针数组语法
//	// 函数类型 (*数组名) (函数参数)
//	int (*arr[4])(int, int) = { 0 };
//	return 0;
//}

#include <stdlib.h>
// e1指向一个整数，e2指向另一个整数
// void*是无具体类型的指针，可以接收任意类型指针
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// qsort将任意类型数组进行排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// 冒泡排序
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	
//	for (int i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;
//		for (int j = 0;j < sz -1 - i;j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

