//#include <stdio.h>
//#include <stdlib.h>
//// 自定义的输出字符串的函数
//void  print( char *p)
//{
//	int i=0;
//	while (1)
//	{
//		if ('\0'==*(p+i))
//		{
//			break;
//		}else
//		{
//			printf("%c",*(p+i));
//			i++;
//		}
//	}
//}
////  或者是下面的自定义函数,使用指针的方式实现输出
//void  outStr(char * str1)
//{
//	for(str1;*str1!='\0';str1++)
//	{
//		putchar(*str1);
//	}
//}
//int main(void)
//{
//	char arr[5]={'a','b','c','d','\0'};
//	//print(arr);
//	outStr(arr);
//	system("pause");
//	return 0;
//}