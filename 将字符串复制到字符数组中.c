//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char  str[10]="hello";
//	char *p="wor";
//	printf("%s\n",str);  //  hell0
//	//  使用指针p遍历字符串，将world拷贝到str中的
//	int i=0;
//	for (*p;*p!='\0';p++)
//	{
//		printf("%c\n",*p); //  world
//		str[i++]=*p;
//	}
//	str[i]='\0'; //  完整的拷贝的过程的，防止拷贝的部分出现的问题的。这个是很关键的。字符串遇到\0就结束了。
//	system("pause");
//	return 0;
//}