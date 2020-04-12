//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//int main(void)
//{
//	// realloc 重新分配内存空间大小，首字节对应的是保证一样的。
//	int *p=(int*)malloc(12u); //  对应的分配12个字节的内存空间
//	int *p1=(int *)realloc(p,20); //  重新分配内存空间，返回空间的首地址的。realloc重新划分内存空间之后对应的首字节地址发生变化了。
//    //   realloc 处于内存碎片上的话，对应的会切换到其他的满足内存条件上的。
//	if (p1==NULL)
//	{
//		printf("内存分配失败");
//	}
//	printf("%d\n",_msize(p1));  //  获取分配的内存字节数字，
//	if (p==p1)
//	{
//       free(p1);
//	}else{
//		 free(p1);
//		 free(p);
//	}
//	system("pause");
//	return 0;
//}