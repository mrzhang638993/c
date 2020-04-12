#include <stdio.h>
#include <stdlib.h>
// 需要注意的是\的后面不要增加空格或者是其他的内容的(包含注释），存在问题的。
#define SUM(x,y)  x+y  \
+3+5
#define PRI   printf("asd\n");\
	printf("qwe\n");
#define NUM(x) #x   //  x对应的默认的转换成为字符串。
#define CONCAT(x,y)  #x ## #y   // 拼接字符串x以及字符串y。一些源码框架中使用的比较的多的，代码中使用的比较的少的。

int main(void)
{
	printf("%d\n",SUM(2,4));
	PRI;
	printf("%s\n",NUM(6));  //  打印字符串，使用的时候必须要使用到%s的输出的。
	printf("%s\n",NUM(asdefghijk));
	printf("%s\n",CONCAT(6,8));  //  输出为68的数据结构
	system("pause");
	return 0;
}