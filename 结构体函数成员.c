//#include <stdio.h>
//#include <stdlib.h>
////  定义结构体,结构体中不能是函数的，存在问题的。可以使用函数指针的方式实现替代的
////  定义函数
//void fun()
//{
//    printf("%s\n","我是结构体函数成员");
//}
//void  fun1(int a,double d )
//{
//	 printf("%s\n","我是结构体函数成员");
//}
//struct  Stu 
//{
//	void (*p) () ; //  定义函数指针
//	void (*p1)(int,double);  // 定义函数指针
//};
//int main(void)
//{
//	struct  Stu  stu;
//	stu.p=fun;  // 初始化操作
//	(stu.p)();  //  函数调用
//	stu.p1=fun1;
//    (stu.p1)(12,23.3);
//	system("pause");
//	return 0;
//}