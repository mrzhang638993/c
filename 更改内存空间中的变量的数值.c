//#include <stdio.h>
//#include <stdlib.h>
////  ��ַ�޸Ķ�Ӧ���ڲ��ĵ�ַ���޸ĵ�
//void fun1(int *p1,int *p2)
//{
//   int  temp=*p1;
//   *p1=*p2;
//   *p2=temp;
//   printf("%p,%p\n",p1,p2);
//}
////  ֵ���ݵĽ�������
//void  fun2(int a,int b)
//{
//	int  temp=a;
//	printf("%d,%d\n",a,b);  //����֮ǰ������
//	a=b;
//	a=temp;
//	printf("%p,%p\n",a,b);  //����֮�������
//}
//// ����2����������ֵ
//int main(void)
//{
//	int  a=12;  //  ����ǰ���Ӧ���ڴ�ռ�ĵ�ַû�з����κεı仯�����ġ�
//	int  b=13;
//	printf("����֮ǰ����ֵ��%d,%d\n",a,b);
//	printf("%p,%p\n",&a,&b);
//	fun1(&a,&b);
//	printf("����֮�����ֵ��%d,%d\n",a,b);
//	printf("%p,%p\n",&a,&b);
//	system("pause");
//	return 0;
//}