#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()//������-�������ڣ�����û��main���������ҽ���һ����
////int�����ͣ�mainǰ���int ��ʾmain�������÷���һ��������ֵ��
//{
//	//�����������
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ�����
//	//printf("Hello world!\n");
//	char ch = 'A';
//	printf("%c\n", ch);
//	return 0;//����0
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
	printf("%d\n", strlen("c:\test\32\test.c"));//\32��Ϊ8���ƴ�����Ǹ�ʮ����������ΪASII���Ӧ���ַ�
	//printf("%c\n", '\'');
	//printf("%s\n","\"");
	//printf("c:\\test\\32\\test.c");
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c' };
	//printf("%d\n", strlen(arr2));//strlen-string length �����ַ����ĳ���
	return 0;
}*/
//#include <stdio.h>
//int main() {
	/*int line=0;
	printf("�ú�ѧC���ԣ�\n");
	while (line < 2000)
	{
		printf("��һ�д���%d\n",line);
		line++;
	}
	printf("��offer");*/
	/*int putin = 0;
	printf("�ϴ�ѧ\n");
	printf("��Ҫ�ú�ѧϰ��0/1��>:");
	scanf("%d", &putin);
	if (putin == 1)
		printf("��offer\n");
	else
		printf("����̭\n");*/
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��һ��Ԫ�ض�Ӧ���±���㿪ʼ��
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
//	printf("%d\n", a ^ b);//���Ǵη�����Ӧ�Ķ�����λ��ͬ��Ϊ0����Ӧ�Ķ�����λ����ͬ��Ϊ1��
//	//&��λ��     ��2���ƣ�λ����
//	//|��λ��
//	//^��λ���
//	/*int a = 1;
//	int b = 0;
//	b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);*/
//	/*int a = 5 / 2;
//	int b = 5 % 2;ȡģ����ȡ����
//	printf("%d\n%d", a,b);*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 10;//=  ��ֵ   ��   ==�ж���ȣ�
//	//��Ŀ������
//	//˫Ŀ������
//	//��Ŀ������
//	/*int b = -2;
//	printf("%d\n", a);
//	printf("%d\n", !a);*/
//	printf("%d\n", sizeof(a));//�����ֽڴ�С
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//����ʽ��ȡ
//	//printf("%d\n", sizeof int);//������ʽ���ɣ�
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
//	printf("��������������������");
//	scanf("%d\t%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("Max=%d", max);
//	/*if (num1 > num2)
//		printf("MAX=%d", num1);
//	else
//		printf("MAX=%d", num2);*/
//	//EOF end of file �ļ������ı�־��
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
//	int b = ~a;//��λȡ��
//	printf("%d\n", b);//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ʹ�õģ���ӡ�����������Դ��
//	int c = a++;//����++����ʹ�ã���++
//	printf("a=%d\n", a);
//	printf("c=%d\n", c);
//	int d = ++a;//ǰ��++����++����ʹ�ã�
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
//	//register int a;�����a����ɼĴ���������
//	//int  ����ı������з��ŵģ�signed int
//	//unsigned int �޷��ŵ�
//	//struct �ṹ��ؼ���
//	//union ������-������
//	//typedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	u_int c=20;
//	int a = 10;
//	int b = 5;
//	int Max = 0;
//	int arr[10] = {0};
//	int sum = (a, b);//�����������ò�������
//	//&��*������->
//	arr[4];//[]�±����ò�������
//	//Max=(a > b ? a : b);
//	//printf("%d\n", Max);
//	//int c = a && b;//�߼��룻||�߼���
//	//printf("%d\n", c);
//	//printf("%d\n", a || b);
//	//0��ʾ�٣������ʾ��
//	//int a = (int)3.14;//()ǿ������ת��
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����;static ���ξֲ��������ֲ��������������ڱ䳤
//	//static����ȫ�ֱ���,�ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ���ˡ�
//	//extern-�����ⲿ���ŵ�
// //static���κ����ı��˺�������������
// //�ⲿ��������->�ڲ���������
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