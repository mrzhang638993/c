//#include <stdio.h>
//#include <stdlib.h>
//void  fun(void)
//{
//	printf("我是函数\n");
//}
//int main(void)
//{
//	//fun();
//	//printf("%d\n",fun==&fun);  //1  对应的体现的是 fun==&fun  其中fun对应的是函数的内存地址的。
//	//  函数调用的本质是函数地址+参数列表的，对应的调用方式可以如下进行的
//	//(&fun)();  // 也是可以调用成功函数的。
//    //printf("%d,%p",fun,&fun); // 3477789  地址随时发生变化的，需要设置一下，否则访问时会报错的。
//	//((void(*)(void))3477789)(); //  10进制调用
//	//((void(*)(void))0x3477789)(); //  16进制调用
//	//  使用函数指针调用
//	//void (*p)(void) =fun ;
//	//p();
//	system("pause");
//	return 0;
//}