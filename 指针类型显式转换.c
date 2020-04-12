//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	// 操作类型1: double指针操作int类型空间
//	//int a=12;
//	//double  *p=(double  *)&a;  //强制的转换int类型的指针转化成为8字节的指针,会出现内存操作越界的。
//	//*p=23;
//	//printf("%lf",*p);
//	// 操作类型二: int 类型指针操作double类型的数据空间
//	double a=12.3;
//	int *p=(int *)&a;
//	*p=12;  // 操作的是double前面的4个字节的空间的
//	*(p+1)=23; //  操作的是double后面的4个字节的内存空间的。
//	*(int*)((short*)p+1)=23;  //  对应的操作的是double对应的中间的4个字节的内容的。
//	printf("%d,%d\n",*((int*)&a),*((int*)&a+1));  // 12,23
//	*((int*)((short*)p+1))=23;
//	printf("%d\n",((int *)((char*)&a+2)));
//	printf("%d\n",*p);  // 不会存在内存越界的，正确的数据返回的 12。
//	printf("%d\n",*(p+1));  //  正确数据 23
//	// 操作类型三: int和float对应的都是4字节的内存空间的。操作都是可以的,不会存在任何问题的。
//	//int a=12;
//	//float *p1=(float *)&a;
//	//*p1=12.3f;
//	//printf("%.2f\n",*p1);
//	system("pause");
//	return 0;
//}