//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	char  str[10]="hello";
//	char *p="wor";
//	char *p1=str;
//	//strcpy(str,p); //字符串拷贝函数.和scanf一样，对应的没有检测数组越界的异常的。需要使用到strcpy_s的越界安全检测的方式的。
//	//strcpy_s(str,10,"abcde"); //  对应的字符串的长度不要大于str的长度的。
//	//strncpy(str,"abcdefghijklmn",5);  //  决定是否越界对应的是后面的数字的。
//	strncpy_s(str,10,"abcdefghijklmn",5);
//	//  str越界存在异常的。
//	printf("%s\n",str);
//	system("pause");
//	return  0;
//}