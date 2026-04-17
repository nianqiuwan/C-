#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//    int n;
//    scanf("%d", &n);
//    float H = 0.0f;
//    for (int i = 1;i <= n;i++)
//    {
//        if (i == 1)
//        {
//            H += i;
//        }
//        else {
//            H += (1.0 / i);
//        }
//    }
//    printf("%f", H);
//    return 0;
//}

// 求数位之和
//int main() {
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    if (n < 0)
//    {
//        n *= (-1);
//    }
//    while (n)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}

// 正整数和反转之和
//int main() {
//    int a;
//    int b = 0;
//    scanf("%d", &a);
//    int A = a;
//    do
//    {
//        b = b * 10 + (A % 10);
//    } while (A /= 10);
//    printf("%d", a + b);
//    return 0;
//}


// 输入多组数据，输出最大数和最小数的差
//int main() {
//    int n, max, min;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0;i < n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    max = arr[n - 1];
//    min = arr[0];
//    for (int i = 0;i < n;i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d", max - min);
//
//    return 0;
//}

//int main()
//{
//    int n;
//    int sum = 0;
//    int sum1 = 0;
//    scanf("%d", &n);
//    for (int i = 1;i <= n;i++)
//    {
//        sum = sum + i;
//        sum1 += sum;
//    }
//    printf("%d", sum1);
//    return 0;
//}

// KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
//int main() {
//    int n, m, max, x, y;
//    scanf("%d %d", &n, &m);
//    max = 0;
//    int arr[12][12];
//    for (int i = 1;i <= n;i++)
//    {
//        for (int j = 1;j <= m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (max < arr[i][j])
//            {
//                max = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//    return 0;
//}int main() {
//    int n, m, max, x, y;
//    scanf("%d %d", &n, &m);
//    max = 0;
//    int arr[12][12];
//    for (int i = 1;i <= n;i++)
//    {
//        for (int j = 1;j <= m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (max < arr[i][j])
//            {
//                max = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//    return 0;
//}int main() {
//    int n, m, max, x, y;
//    scanf("%d %d", &n, &m);
//    max = 0;
//    int arr[12][12];
//    for (int i = 1;i <= n;i++)
//    {
//        for (int j = 1;j <= m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (max < arr[i][j])
//            {
//                max = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//    return 0;
//}