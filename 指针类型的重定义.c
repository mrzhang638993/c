//#include <stdio.h>
//#include <stdlib.h>
//
//typedef  int *  pint;
////  结构体重命名
//typedef struct Node
//{
//	int a;
//} _Node;  // _Node 对应的是结构体Node的重命名的。
//
//typedef struct 
//{
//	int a;
//} _Node1;  // 给结构体增加一个名称
////  函数指针重命名
//void  fun(int a,double b)
//{
//	printf("%d\n",19);
//}
//typedef void (*_fun) (int , double )   ;  //  函数指针类型重命名的时候，需要注意函数的位置。
//int main(void)
//{
//	int a=13;
//	pint p=&a;
//	_Node  node={12};
//	_Node1 node1;
//	_fun f1=fun; //  定义函数指针
//	f1(3,4.5);
//	printf("%d\n",node.a);
//	printf("%d\n",*p);  // 13
//	system("pause");
//	return 0;
//}