#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()//主函数-程序的入口，不能没有main函数，有且仅有一个。
////int是整型，main前面的int 表示main函数调用返回一个整型数值。
//{
//	//这里完成任务
//	//库函数-C语言本身提供给我们使用的函数。
//	//printf("Hello world!\n");
//	char ch = 'A';
//	printf("%c\n", ch);
//	return 0;//返回0
//}
//#include <stdio.h> main()
//int main()
//{
//	int i, j;
//	i = 010;
//	j = 9;
//	printf("%d", i);
//	return 0;
//}
/*/#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//\32作为8进制代表的那个十进制数字作为ASII码对应的字符
	//printf("%c\n", '\'');
	//printf("%s\n","\"");
	//printf("c:\\test\\32\\test.c");
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c' };
	//printf("%d\n", strlen(arr2));//strlen-string length 计算字符串的长度
	return 0;
}*/
//#include <stdio.h>
//int main() {
	/*int line=0;
	printf("好好学C语言：\n");
	while (line < 2000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	printf("好offer");*/
	/*int putin = 0;
	printf("上大学\n");
	printf("你要好好学习吗（0/1）>:");
	scanf("%d", &putin);
	if (putin == 1)
		printf("好offer\n");
	else
		printf("被淘汰\n");*/
	//return 0;
//}
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main() {
//	int a = 200;
//	int b = 100;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//第一个元素对应的下标从零开始。
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);//不是次方，对应的二进制位相同则为0；对应的二进制位不相同则为1；
//	//&按位与     （2进制）位操作
//	//|按位或
//	//^按位异或
//	/*int a = 1;
//	int b = 0;
//	b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);*/
//	/*int a = 5 / 2;
//	int b = 5 % 2;取模，即取余数
//	printf("%d\n%d", a,b);*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 10;//=  赋值   ；   ==判断相等；
//	//单目操作符
//	//双目操作符
//	//三目操作符
//	/*int b = -2;
//	printf("%d\n", a);
//	printf("%d\n", !a);*/
//	printf("%d\n", sizeof(a));//计算字节大小
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//该形式可取
//	//printf("%d\n", sizeof int);//此种形式不可，
//	printf("%d\n", sizeof(arr) / sizeof(int));
//	return 0;
//
//}
//#include <stdio.h>
//int Max(int num1, int num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("请输入任意两个整数：");
//	scanf("%d\t%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("Max=%d", max);
//	/*if (num1 > num2)
//		printf("MAX=%d", num1);
//	else
//		printf("MAX=%d", num2);*/
//	//EOF end of file 文件结束的标志；
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	int b = ~a;//按位取反
//	printf("%d\n", b);//负数在内存中存储的时候，存储的是二进制的补码
//	//使用的，打印的是这个数的源码
//	int c = a++;//后置++，先使用，再++
//	printf("a=%d\n", a);
//	printf("c=%d\n", c);
//	int d = ++a;//前置++，先++，再使用；
//	printf("a=%d\n", a);
//	printf("d=%d\n", d);
//	return 0;
//}
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//register int a;建议把a定义成寄存器变量；
//	//int  定义的变量是有符号的，signed int
//	//unsigned int 无符号的
//	//struct 结构体关键字
//	//union 联合体-共用体
//	//typedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	u_int c=20;
//	int a = 10;
//	int b = 5;
//	int Max = 0;
//	int arr[10] = {0};
//	int sum = (a, b);//（）函数调用操作符；
//	//&，*，，，->
//	arr[4];//[]下标引用操作符；
//	//Max=(a > b ? a : b);
//	//printf("%d\n", Max);
//	//int c = a && b;//逻辑与；||逻辑或
//	//printf("%d\n", c);
//	//printf("%d\n", a || b);
//	//0表示假；非零表示真
//	//int a = (int)3.14;//()强制类型转换
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量;static 修饰局部变量，局部变量的生命周期变长
//	//static修饰全局变量,改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法在使用了。
//	//extern-声明外部符号的
// //static修饰函数改变了函数的链接属性
// //外部链接属性->内部链接属性
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>
extern int Add(int x, int y);
int main()
{
	int a = 2;
	int b = 3;
	int sum = Add(a, b);
	printf("%d\n", sum);
	//extern int g_val;
	//printf("%d\n", g_val);
	return 0;
}