//#include <stdio.h>
//#include <stdlib.h>
//
//int  main(void)
//{
//	// 二维指针类型和二维数组指针类型完全是不一样的。
//	int a=12;
//	int *p=&a;  // p对应的是一级指针
//	int ** p1=&p;  //  二维指针类型
//	int  b[3][4]; //  对应的二维数组类型
//	int (*p4)[3][4]=&b;  //  二维数组指针类型
//	// 下面对应的表达式是成立的
//	printf("%d\n",*p==a);
//	printf("%d\n",p1==&p);
//	printf("%d\n",*p1==p);
//	printf("%d,%d,%d,%d,%d,%d\n",&a,p,&p,p1,*p1,&p1); //&a=p=*p1,p1=&p,&p1,*p1对应的是p存储的内容，实际上是a的地址的。
//    printf("%d,%d,%d\n",a,*p,**p1); //12,12,12  *代表的是一次取地址对应的数值的运算，**代表的是两次取地址对应的数值运算。
//	system("pause");
//	return 0;
//}