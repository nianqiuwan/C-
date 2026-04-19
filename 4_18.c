#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//    int a=0;
//    int b=0;
//    for (int i = 0;i < 10;i++)
//    {
//        int num;
//        scanf("%d", &num);
//        if (num > 0)
//        {
//            a++;
//        }
//        else
//        {
//            b++;
//        }
//    }
//    printf("positive:%d\n", a);
//    printf("negative:%d\n", b);
//    return 0;
//}

// 判断数组是否有序
//int main() {
//    int n;
//    scanf("%d", &n);
//    int count1 = 0;
//    int count2 = 0;
//    int arr[n];
//    for (int i = 0;i < n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0;i < n - 1;i++)
//    {
//        if (arr[i] - arr[i + 1] >= 0)
//        {
//            count1++;
//        }
//        else if (arr[i] - arr[i + 1] <= 0)
//        {
//            count2++;
//        }
//    }
//    if (count1 == n - 1 || count2 == n - 1)
//    {
//        printf("sorted");
//    }
//    else {
//        printf("unsorted");
//    }
//    return 0;
//}

// 查找数组
//int main() {
//    int n, num;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 1;i <= n;i++)
//    {
//        scanf("%d", &arr[i - 1]);
//    }
//    scanf("%d", &num);
//    int count = 0;
//    for (int i = 1;i <= n;i++)
//    {
//        if (arr[i - 1] == num)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}