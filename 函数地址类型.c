//#include <stdio.h>
//#include <stdlib.h>
//// 函数地址
////int fun(int a,int b); //函数地址如下：int (int a,int b) 对应的是函数地址
//int fun(int a)
//{
//	printf("我是fun\n");
//	return 0;
//}
//int fun1(int a)
//{
//	printf("我是fun1\n");
//	return 0;
//}
//int  fun2(int a,int b)
//{
//	printf("我是fun2\n");
//	printf("我是fun2\n");
//	printf("我是fun2\n");
//	return 9;
//}
//int main(void)
//{
//	//int (int a)  对应的是函数类型的
//	//fun,fun1,fun2  对应的是函数地址的。
//	//fun2的类型 int  (int a,int b)
//	// 函数指针变量的定义如下：
//	int(*p) (int )=fun;  //定义函数指针变量p
//	int(*p1) (int )=fun1; //定义函数指针变量p1
//	int(*p2) (int ,int )=fun2; //定义函数指针变量p2
//	printf("%p\n",p);
//	printf("%p\n",p1);
//	printf("%p\n",p2);
//	//  函数调用可以如下进行的
//	p(3);
//	p1(4);
//	p2(5,6);
//	//函数变量的操作和理解  int *p(int) 对应的(的优先级高于*的优先级的，p对应的是一个函数变量的。如果是*的优先级较高的话，对应的是一个指针变量。
//	//函数名称对应的是一个地址的，对应的是一个地址常量的。
//	system("pause");
//	return 0;
//}