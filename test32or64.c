//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int *p;
//	double *p1;
//	short *p4;
//	float *p5;
//	int (*p2)[2][3];
//	int (*p3)[3];
//	printf("%d,%d,%d,%d\n",sizeof(p),sizeof(p1),sizeof(p4),sizeof(p5),sizeof(p2),sizeof(p3)); 
//	//  win32下面对应的是4字节的指针，x64下面对应的是8字节的指针
//	printf("%d,%d\n",sizeof(p),sizeof(int *));
//	printf("%d,%d\n",sizeof(p1),sizeof(double *));
//	printf("%d,%d\n",sizeof(p4),sizeof(short *));
//	printf("%d,%d\n",sizeof(p5),sizeof(float *));
//	printf("%d,%d\n",sizeof(p2),sizeof(int (*)[2][3]));
//	printf("%d,%d\n",sizeof(p3),sizeof(int (*)[3]));
//	//  对应的执行相关的数据逻辑操作
//	system("pause");
//	return 0;
//}