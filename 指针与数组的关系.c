//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	// 下标运算不是数组的专属，下标运算对应的只是一个运算符的概念的。指针也是可以采用下标运算的。
//	//  对应的条件：连续空间，同种类型的变量
//	//  越界读是不存在问题的，越界写对应的是存在问题的，对应的会出现异常的。
//	int a[5]={9,7,5,3,1};
//	int  *p=&a[0]; 
//	int i;
//	for(i=0;i<5;i++)
//	{
//       printf("%d,%d\n",a[i],p[i]);
//	}
//	system("pause");
//	return  0;
//}