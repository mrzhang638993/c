//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////  常见的字符串操作函数
//int main(void)
//{
//	char *p="12345";
//	unsigned int len=strlen(p); // 获取字符串的长度，输出为5
//	int a;
//	int result;
//	//printf("%d\n",len);
//	//  获取字符串的比较的结果，比较的结果是整形的变量。
//	//a=strcmp("abcd","abde");  //  对应的是d>e 返回的是负数的。
//	//printf("%d\n",a);  //  输出结果为 -1
//	//  常见的使用情景是如下的：
//	//if (strcmp("abcd","abde")>0)   // strcmp对应的返回的结果是大于0，小于0以及等于0的情况的，返回的是两个字符之间的ascii值的差异的。
//	//{
//	//	//  前面大于后面的情况
//	//}else if(strcmp("abcd","abde")<0)
//	//{
//	//	//  前面的字符小于后面的字符
//	//}else
//	//{
//	//	//  比较的是前面的和后面的字符相等的。
//	//}
//	//  字符串比较前面的n个字符
//	//result=strncmp("abcd","abde",2);  // 比较的是前面的2个字符的，输出的结果是0
//	//printf("%d\n",result);
//	system("pause");
//	return 0;
//}