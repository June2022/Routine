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
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int a = 10;//=  ��ֵ   ��   ==�ж���ȣ�
	//��Ŀ������
	//˫Ŀ������
	//��Ŀ������
	/*int b = -2;
	printf("%d\n", a);
	printf("%d\n", !a);*/
	printf("%d\n", sizeof(a));//�����ֽڴ�С
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//����ʽ��ȡ
	//printf("%d\n", sizeof int);//������ʽ���ɣ�
	printf("%d\n", sizeof(arr) / sizeof(int));
	return 0;

}