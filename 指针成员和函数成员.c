//#include <stdio.h>
//#include <stdlib.h>
//struct  Stu 
//{
//	int *p;  //  指针成员
//};
//int  main(void)
//{
//	int a[5]={1,2,3,4,5};
//	//struct  Stu stu={a};  //  初始化  NULL  ,栈区地址以及堆区地址。
//	struct  Stu stu;
//	stu.p=(int *)malloc(20);  //  调用成员进行赋值操作,指向的是堆空间的。
//	stu.p[0]=1;
//	stu.p[1]=2;
//	printf("%d,%d\n",(stu.p)[0],(stu.p)[1]);  // 对应的完成相关的指针赋值操作，对应的输出为1,2
//	system("pause");
//	return 0;
//}