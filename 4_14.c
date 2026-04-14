#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 给定秒数secondsseconds，将其转换为对应的小时数、分钟数和秒数，使得总时间不变，但分钟数和秒数都不超过
//int main() {
//    int seconds = 0;
//    scanf("%d", &seconds);
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    a = seconds / 3600;
//    b = (seconds % 3600) / 60;
//    c = (seconds % 3600) % 60;
//    printf("%d %d %d", a, b, c);
//    return 0;
//}

// 小S知道原计划星期 xx 开学，通知开学时间延期n天，请问开学日期是星期几（星期日用77 表示）？
//int main() {
//    int x, n;
//    scanf("%d %d", &x, &n);
//    printf("%d", (x + n - 1) % 7 + 1);
//    return 0;
//}