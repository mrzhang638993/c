//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//int a=12;
//	//int b=12;
//	//int c=(a--);
//	//int d=(--b);
//	//printf("%d,%d\n",a,c);  //  11  12
//	//printf("%d,%d\n",b,d);  //  11  11 
//	int a=12;
//	int b=a++ + ++a + a++;  // 不同的编译器对于编译的结果给出的结果不相同。
//	
//	//printf("%d,%d,%d\n",a,a++,++a); //  这个语句中不能出现相关的多个自增和自减操作的语句的，存在问题。
//	//  推荐使用下面的语句代替上面的语句的。
//	printf("%d\n",a);
//	printf("%d\n",a++);
//	printf("%d\n",++a);
//	printf("%d\n",b);
//	system("pause");
//	return 0;
//}