#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("    **\n");
//	printf("    **\n");
//	printf("***********\n");
//	printf("***********\n");
//	printf("   *  *\n");
//	printf("   *  *\n");
//
//	return 0;
//}

//int main() {
//
//	printf("Name Age Gender\n");
//	printf("-----------------\n");
//	printf("Jack 18 Gender\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//
//	printf("%d \n",(-8+22) * a - 10 + c / 2 );
//	return 0;
//}


//int max(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//int main() {
//	
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1 , &num2);
//	printf("%d\n", max(num1, num2));
//	
//	
//	
//	return 0;
//}
//
//int num(int x) 
//{
//	int y = 0;
//	if (x < 0) {
//		y = 1;
//	}
//	else if (y = 0) {
//		y = 0;
//	}
//	else {
//		y = -1;
//	}
//	return y;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", num(x));
//
//
//	return 0;
//}


//// 关键词 typedef
//// 类型重新命名
//typedef unsigned int uint;
//int main()
//{
//	uint num = 0;// 相当于unsigned int 
//	return 0;
//}

// static
// 让变量变静态
// 1.修饰局部变量
// 2.修饰全局变量（static 修饰全局变量的时候，这个全局变量外部链接属性变成内部链接属性其他源文件无法使用这个全局变量函数同理）
// 3.修饰函数
//void add()
//{
//	static int a = 0;// 不加static输出全是1
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10) {
//		add();
//		a++;
//	}
//	return 0;
//}


// register 寄存器
int main()
{
	register int num = 3;// 建议将这个变量放在寄存器中
	return 0;
}