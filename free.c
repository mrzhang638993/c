//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <memory.h>
//
//int main(void)
//{
//	int *p=(int*)malloc(4u);
//	*p=12;
//	printf("%d,%p\n",*p,p);
//	free(p);  //释放内存空间，释放的内存空间只是交给了操作系统而已的。其他的地址还是地址的没有变化的。p对应的是还是原来的地址的
//	printf("%d\n,%p\n",*p,p);//  释放之后，对应的已经没有了数据的。
//	p=NULL; //  指针赋值为null，是一个很好的习惯的。
//	if (p==NULL)
//	{
//		//  使用指针编程之前需要校验指针是否为空的。
//	}
//	printf("%d\n,%p\n",*p,p);
//	system("pause");
//	return 0;
//}