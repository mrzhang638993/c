//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//int  main(void)
//{
//	//  c语言以及c++语言对应的都不会检查数组越界的错误的。内存操作的使用容易导致溢出的
//	//int *p=(int *)malloc(3u);  //  存在问题，申请了3个字节，对应的调用指针操作4个字节导致内存溢出的。
//	int *p=(int *)malloc(4u);
//	int *p1=p;
//	//*(p+1)=12; 对应的也会出现内存溢出的情况的
//	*p1=12;
//	free(p1);
//	//*p=(int*)malloc(4u);  //  会导致内存泄漏的，原来p对应的内存空间再也找不到了。对应的会造成内存丢失的。内存继续占有的，不会释放的。
//	system("pause");
//	return 0;
//}