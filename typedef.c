//#include<stdio.h>
//#include<stdlib.h>
//
//typedef  int  my_int;
//typedef  int  my_int;  //  可以重复声明多次的。不能存在二义性。
////typedef  double  my_int ;  需要注意的是一个重名民的名称不能有两个不同的类型的，否则会不报错的。计算机无法识别真实的类型。
//typedef  my_int  your_int;
//typedef  unsigned int  unint;  // 给类型重命名
//
//int  main(void)
//{
//	my_int a=12;  //  使用类型定义变量的。
//	your_int  b=13;
//	unint  c=13;
//	typedef  int  dint;  //  在函数里面的声明的，只能在函数里面使用的。其他的地方是不能使用的。
//	dint  f=14;
//	printf("%d\n",12);
//	printf("%d\n",b);
//	printf("%d\n",c);
//	printf("%d\n",f);
//	system("pause");
//	return 0;
//}