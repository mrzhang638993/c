//#include <stdio.h>
//#include <stdlib.h>
//#define ONE 1   //  不能写分号，对应的会报错的。宏的本质对应的是替换的操作的。在编译的过程中进行替换的。回将后面的所有的内容全部替换的。
//#define TWO 2*3+1
//#define PRINT  printf("欢迎使用宏进行操作\n")
//#define  THREE   //  相当于一个空语句的。本身没有什么调用的意义的。
//int main(void)
//{
//	printf("%d\n",ONE);
//	printf("%d\n",TWO);  //  宏不会进行任何的计算的，编译的时候进行替换的。程序运行的时候才会执行的。
//    PRINT;    //  直接调用宏语句
//	system("pause");
//	return 0;
//}