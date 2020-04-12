//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int a[5]={9,7,5,3,1};
//	int  *p=&a[0]; 
//	int i=0;
//	//for(i=0;i<5;i++){
//	//	// printf("%d\n",*p+i);  //对应的执行的逻辑是首先执行*p，然后对应的执行加1的操作的。
//	//	printf("%d\n",*(p+i));
//	//}
//	for (i=0;i<5;i++)
//	{
//		printf("%d\n",*p++); // ++的优先级高于*的优先级，所以没有问题
//	}
//	system("pause");
//	return 0;
//}