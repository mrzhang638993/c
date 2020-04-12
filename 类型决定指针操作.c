//#include <stdio.h>
//#include <stdlib.h>
//
//int  main(void)
//{
//	int a=123;
//	int *p=&a;//  指针类型和操作的数据类型需要保持一致的。
//	double  d=123.123;
//	//printf("%d,%d\n",a,*p);  //  输出变量a的数值。
//	int  *p1=&d;  //  对应的只是操作一部分的数据的，数据存在问题的。
//	printf("%lf,%lf\n",d,*p1);  // 指针类型不兼容的话，通过*p获取数据是存在问题的。
//	//*p=12345;
//    //printf("%d,%d\n",a,*p);  //  输出变量a的数值。
//	system("pause");
//	return 0;
//}