//#include <stdio.h>
//#include <stdlib.h>
//void   fun1(int *p)
//{
//   p=NULL;
//   printf("%p\n",p);  //对应的内存空间如下：00000000
//}
//void  fun2(int* *p)
//{
//	printf("%p\n",*p);
//	*p=NULL;
//	printf("%p\n",*p);  // 00000000
//}
////  函数修改指针变量
//int main(void)
//{
//	int a=12;
//	int *p1=&a;
//	printf("%p\n",p1);  // p1没有发生任何的改变的
//	//fun1(p1);
//	fun2(&p1);  //  对应的是二级指针的操作的。
//	printf("%p\n",p1); // p1没有发生任何的改变的，对应的输出是：00000000
//	system("pause");
//	return 0;
//}