//#include <stdio.h>
//#include <stdlib.h>
//union Uc
//{
//	char c;
//    short s;
//	int i;
//}un1 ; //  在声明的时候定义变量。
////  联合的含义:所有的成员共享内存的。修改一个成员的数值的话，其他的成员对应的都会发生变化的。特点：修改一起其他的都是会修改的。
//int main(void)
//{
//	//printf("%p\n%p\n%p\n",un1.c,un1.s,un1.i);  // 对应的都是00000000
//	//union Uc uc={ uc.i=34 };  //  初始化的时候需要注意，初始化一个会影响其他的。初始化了i
//	//union Uc uc;
//	//uc.i=98;
//	union Uc  uc={21};
//	printf("%p\n%p\n%p\n",uc.c,uc.s,uc.i);  //  转换为二进制之后对应的读取结果的。
//	printf("%d\n",sizeof(uc));  // 4个字节。按照最大的大小对应的是其长度的。
//	system("pause");
//	return 0;
//}