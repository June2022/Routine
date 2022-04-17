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
//int a = 100;
//int main()
//{
	 //int a = 10;
		//printf("%d\n", a);
	/*float f = 5;
	printf("%f", f);*/
	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));*/
	//return 0;
//}
//#include <stdio.h>//计算两个数相加
//int main()
//{
//	int a, b;
//	int sum=0;
//	printf("请输入任意两个整数：");
//	scanf("%d,%d", &a, &b);
//	sum = a + b;
//	printf("a+b=%d", sum);
//
//}
#include <stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}