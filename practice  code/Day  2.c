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
//#include <stdio.h>//�������������
//int main()
//{
//	int a, b;
//	int sum=0;
//	printf("��������������������");
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