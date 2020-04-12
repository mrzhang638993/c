//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//int * fun(void)
//{
//	int *p=(int*)malloc(sizeof(int)*2); //  对应的属于堆区空间的，对应的是动态内存分配的。
//	*(p+1)=4;
//	*(p+2)=5;
//	return p; //  逗号表达式的结果对应的是最右边的结果的，对应的表达式的结果是5的
//}
//int  main(void)
//{
//	int *p=fun();
//	printf("%d,%d\n",p[1],p[2]);
//	free(p);
//	system("pause");
//	return 0;
//}