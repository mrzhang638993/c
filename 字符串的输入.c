//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	//  输入  hello c3  会显示为 hello  c3的相关的逻辑的
//	char  str[20]; // 对应的是字符串的输入
//	//scanf("%s",str);  //  scanf会将空格作为字符串的分隔符的，需要注意。
//    //scanf_s("%s",str,19); //  增加对于内存的保护的，防止数组越界的。不能为20，尾部需要默认的增加\0的字符的。
//	//printf("%s\n",str);
//	//scanf("%s",str);
//	//gets(str); //  可以读取空格字符的。需要防止内存越界。
//	gets_s(str,19);//  19=20-1  ，会出现异常的。需要进行控制的，否则会出现异常不是很好排查的。
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}