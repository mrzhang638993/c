//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//// 对应的是可变参数的取值操作
//void  fun(int a,...)  // a 对应的体现出来的是参数的个数信息
//{
//	va_list ap;  //  定义参数列表
//	va_start(ap,a);  //  对应的完成可变参数到参数列表的转换操作
//	printf("%d\n",va_arg(ap,int));  //  从参数列表中取值，va_arg只能够顺序取值的，取出来的话对应的就没有了
//	printf("%lf\n",va_arg(ap,double)); 
//	printf("%d\n",va_arg(ap,int));
//	//  printf("%d,%d,%d\n",4,5,6); // 对应的也是可变参数的函数的。
//}
////  参数个数不确定的函数
//int main(void)
//{
//	fun(3,12,34.34,56);
//	system("pause");
//	return 0;
//}