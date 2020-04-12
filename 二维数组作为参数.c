//#include <stdio.h>
//#include <stdlib.h>
////  或者书写成为如下的：void  fun(int p[2][3],int hang,int lie);
//void  fun(int (*p)[3],int hang,int lie)
//{
//	int i,j;
//	for(i=0;i<hang;i++)
//	{
//		for(j=0;j<lie;j++)
//		{
//			printf("%d\n",p[i][j]);
//		}
//	}
//}
//void fun1(int *p,int hang,int lie)
//{
//	int i;
//	for(i=0;i<hang*lie;i++)
//	{
//			printf("%d\n",p[i]);
//	}
//}
//void fun2(int (*p)[2][3],int hang,int lie)
//{
//	int i,j;
//	for(i=0;i<hang;i++)
//	{
//		for(j=0;j<lie;j++)
//		{
//			printf("%d\n",(*p)[i][j]);
//		}
//	}
//}
////  二维数组作为参数操作
//int main(void)
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int (*p)[3]=a;  //  定义指针变量指向二位数组,p的作用类似于数组的。
//	//fun(a,2,3);
//	// 或者是如下的方式的 fun(&a,2,3);  &a=a;
//	//fun1(&a[0][0],2,3);
//	fun2(&a,2,3);
//	system("pause");
//	return 0;
//}