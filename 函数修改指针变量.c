//#include <stdio.h>
//#include <stdlib.h>
//void   fun1(int *p)
//{
//   p=NULL;
//   printf("%p\n",p);  //��Ӧ���ڴ�ռ����£�00000000
//}
//void  fun2(int* *p)
//{
//	printf("%p\n",*p);
//	*p=NULL;
//	printf("%p\n",*p);  // 00000000
//}
////  �����޸�ָ�����
//int main(void)
//{
//	int a=12;
//	int *p1=&a;
//	printf("%p\n",p1);  // p1û�з����κεĸı��
//	//fun1(p1);
//	fun2(&p1);  //  ��Ӧ���Ƕ���ָ��Ĳ����ġ�
//	printf("%p\n",p1); // p1û�з����κεĸı�ģ���Ӧ������ǣ�00000000
//	system("pause");
//	return 0;
//}