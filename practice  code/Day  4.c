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
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int a = 10;//=  赋值   ；   ==判断相等；
	//单目操作符
	//双目操作符
	//三目操作符
	/*int b = -2;
	printf("%d\n", a);
	printf("%d\n", !a);*/
	printf("%d\n", sizeof(a));//计算字节大小
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//该形式可取
	//printf("%d\n", sizeof int);//此种形式不可，
	printf("%d\n", sizeof(arr) / sizeof(int));
	return 0;

}