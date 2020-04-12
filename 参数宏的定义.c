//#include <stdio.h>
//#include <stdlib.h>
////  标准的写法中需要x是需要增加()的。
//#define PRINTF(x)  printf("%d\n",(x)*2)  //  参数宏中没有参数类型的定义的。对应的只是进行单纯的替换操作的。
////  x，y最好都加上小括号的。防止运算表达式发生改变的。
//#define PRINTF_1(x,y)  printf("%d\n",(x)*2/(y))
////  参数宏的定义
//#define   SUM(x,y)  ((x)+(y))
//#define   MUL(x,y)  ((x)*(y))
//#define   MYMAX(x,y) ((x)>(y)?(x):(y))
//int main(void)
//{
//	PRINTF(6); //  调用参数宏
//	PRINTF(3+4); //  对应的只是进行替换的操作的。
//	PRINTF_1(20,80); //执行对应的逻辑
//	printf("%d\n",SUM(7,8));  //  15  可以丰富和扩展宏的操作的。
//	printf("%d\n",MUL(7,8));   //  56  
//	printf("%d\n",MYMAX(5,6));
//	system("pause");
//	return 0;
//}