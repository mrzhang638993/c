//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//int  main(void)
//{
//	int *p=(int*)malloc(4u);
//	// malloc  申请空间失败的话，对应的会返回NULL，对应的数值为0的，所以申请空间的时候需要进行判断的。
//	//int *p=(int*)malloc(4);  //申请了内存空间的，对应的获取到对应的首地址的。
//	//*p=12;
//	//  size_t 对应的是 unsigned int 的重命名，本质和unsigned int是一样的。win32对应的是4字节的，x64的编译器对应的是8字节的
//	//printf("%d\n",*p);
//	//  执行对应的逻辑输出操作
//	int *p1=(int *)malloc(2u*1024u*1024u*1024u); // 整形常量溢出，对应的使用unsigned  int的方式访问。
//	// 0x000000 对应的可以理解为没有空间可以进行申请操作的，没有内存空间进行分配。
//	if (p1==NULL)
//	{
//		printf("申请空间失败\n");
//	}
//	system("pause");
//	return  0;
//}