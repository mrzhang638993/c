//#include <stdio.h>
//#include <stdlib.h>
//// ������ַ
////int fun(int a,int b); //������ַ���£�int (int a,int b) ��Ӧ���Ǻ�����ַ
//int fun(int a)
//{
//	printf("����fun\n");
//	return 0;
//}
//int fun1(int a)
//{
//	printf("����fun1\n");
//	return 0;
//}
//int  fun2(int a,int b)
//{
//	printf("����fun2\n");
//	printf("����fun2\n");
//	printf("����fun2\n");
//	return 9;
//}
//int main(void)
//{
//	//int (int a)  ��Ӧ���Ǻ������͵�
//	//fun,fun1,fun2  ��Ӧ���Ǻ�����ַ�ġ�
//	//fun2������ int  (int a,int b)
//	// ����ָ������Ķ������£�
//	int(*p) (int )=fun;  //���庯��ָ�����p
//	int(*p1) (int )=fun1; //���庯��ָ�����p1
//	int(*p2) (int ,int )=fun2; //���庯��ָ�����p2
//	printf("%p\n",p);
//	printf("%p\n",p1);
//	printf("%p\n",p2);
//	//  �������ÿ������½��е�
//	p(3);
//	p1(4);
//	p2(5,6);
//	//���������Ĳ��������  int *p(int) ��Ӧ��(�����ȼ�����*�����ȼ��ģ�p��Ӧ����һ�����������ġ������*�����ȼ��ϸߵĻ�����Ӧ����һ��ָ�������
//	//�������ƶ�Ӧ����һ����ַ�ģ���Ӧ����һ����ַ�����ġ�
//	system("pause");
//	return 0;
//}