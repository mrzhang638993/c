//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <memory.h>
//
//int main(void)
//{
//	//int *p;
//	//p=(int*)malloc(4u);
//	//printf("%p\n",p);
//	//*p=0; // malloc对应的空间不能自动的赋值和初始化的，需要手动的赋值和初始化操作。
//	//printf("%d\n",*p);
//
//	//  下面针对的是分配多个空间来进行相关的数据的逻辑处理的
//	int  *p1=(int *)malloc(40u);
//	int i=0;
//	//for(i=0;i<10;i++){
//	//	*(p1+i)=0; //  指针每次移动4个字节的数据
//	//}
//	//for(i=0;i<10;i++){
//	//	printf("%d\n",p1[i]);
//	//}
//	//  memset  对应的可以将内存空间中的每一个字节对应的设置为0
//	memset(p1,0,40);  //  字节赋值的，对于int而言，每个字节对应的都会赋值为1的。除了0之外的赋值对应的都会出现问题的。
//	for(i=0;i<10;i++){
//		printf("%d\n",p1[i]);
//	}
//	system("pause");
//	return 0;
//}