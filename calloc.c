//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//int main(void)
//{
//	int *p=(int*)calloc(5,sizeof(int)); // 申请的是一段连续的数组内存空间的,对应的数组元素的默认值是0的
//	//  malloc的空间不会进行初始化的，并且对应的是基于字节的内存使用的。calloc更加好的使用的。
//	int  i=0;
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",p[i]);  //对应的数组元素是0的
//	}
//	free(p); // c语言中释放空间都采用的是free进行管理的。
//	system("pause");
//	return 0;
//}