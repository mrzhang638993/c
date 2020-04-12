//#include <stdio.h>
//#include <stdlib.h>
////  地址修改对应的内部的地址是修改的
//void fun1(int *p1,int *p2)
//{
//   int  temp=*p1;
//   *p1=*p2;
//   *p2=temp;
//   printf("%p,%p\n",p1,p2);
//}
////  值传递的交换测试
//void  fun2(int a,int b)
//{
//	int  temp=a;
//	printf("%d,%d\n",a,b);  //交换之前的数据
//	a=b;
//	a=temp;
//	printf("%p,%p\n",a,b);  //交换之后的数据
//}
//// 交换2个变量的数值
//int main(void)
//{
//	int  a=12;  //  交换前后对应的内存空间的地址没有发生任何的变化操作的。
//	int  b=13;
//	printf("交换之前的数值：%d,%d\n",a,b);
//	printf("%p,%p\n",&a,&b);
//	fun1(&a,&b);
//	printf("交换之后的数值：%d,%d\n",a,b);
//	printf("%p,%p\n",&a,&b);
//	system("pause");
//	return 0;
//}