//#include <stdio.h>
//#include <stdlib.h>
//
//void  fun2(int *p)
//{
//	*p=12;  //对应的直接操作内存空间的数值的。地址传递是可以修改内存的数值的。
//}
//void  fun1(int b)
//{
//	b=13;// 直接修改数值的话，对应的不会发生改变的。值传递无法修改内存的数值的。
//	printf("%d\n",b);  //  13
//}
////  函数内部的数据传递到函数的外部
//int main(void)
//{
//	int a=2;
//	fun1(a);
//	printf("%d\n",a);  //2
//	fun2(&a);  // 可以完成相关的内存对应的内容的修改
//	printf("%d\n",a);  //12
//	system("pause");
//	return 0;
//}