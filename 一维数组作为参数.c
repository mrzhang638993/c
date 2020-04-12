//#include <stdio.h>
//#include <stdlib.h>
////  对应的指针 int *p  可以书写成为数组的形式的: int p[5]，数组做指针本质上会解析成为指针的。所以长度对应的可以不写的
////  void  fun1( int p[],int length)
//void  fun1( int *p,int length)
//{
//	int i=0;
//	for(i=0;i<length;i++)
//	{
//		printf("%d\n",p[i]); 
//	}
//}
//int  main(void)
//{
//	int a[5]={1,2,3,4,5};
//	fun1(a,5); //  需要传递的是数组元素的首地址的，不能传递&a的地址的，是有问题的。&a+1对应的是下一个数组的。
//	// 或者是如下的   fun1(&a,5);
//	system("pause");
//	return 0;
//}