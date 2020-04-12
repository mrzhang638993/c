//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//int main(void)
//{
//	//int *p=(int*)malloc(sizeof(int)*5); //  分配5个元素的int类型的变量空间
//	//memset(p,0,sizeof(int)*5); //  给每一个内存的字节设置初始值为0的数值的。
//	//int a[5];
//	//int *p2=&a[0];
//	//  *(p+i)=p[i];
//	//int i=0;
//	//for(i=0;i<5;i++){
//	//	*(p+i)=i;
//	//}
//	//for(i=0;i<5;i++){
//	//	printf("%d\n",p[i]);  // 0,1,2,3,4的内存空间的
//	//}
//	//free(p);  //  free 释放空间的操作和对应的存储数据的类型是无关的，和类型没有任何的关系的。
//	//  定义  int a[5] 对应的是栈区空间的大小的。malloc对应的是堆区的大小的，malloc对应的可以在运行的时候指定空间大小的。
//	//  对应的生成动态的数组的。只有在vs2013以及后续的版本中存在这样的功能的。
//	/*unsigned  int  a;
//	scanf("%u",a);
//	int *p=(int*)malloc(a);
//	free(p);*/
//	system("pause");
//	return 0;
//}