//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//int main(void)
//{
//	//int *p=(int *)malloc(4);
//	//free(p);
//	//free(p);  //  重复释放已经释放的内存空间的话，会导致内存异常的
//
//	//  不能释放栈区空间，栈区空间对应的是操作系统释放的
//	//  使用指针的时候需要关注空间的存储，释放等可能造成的异常原因的。指针的释放对应的是从头部开始释放的。
//	//int a[12];
//	//free(a);
//	int *p=(int*)malloc(8u); // 一次申请8个字节的内存空间
//	p++;
//	free(p);  //  移动之后，对应的无法知道释放的内存空间的，指针需要设置在首位置的，首位置记录了手指针以及对应的释放的长度的。
//	system("pause");
//	return 0;
//}