//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	//  定义字符串数组，对应的指针指向的是常量池空间的。操作的是常量本身的。是不能修改的
//	char * str[3]={"asd","asdas","adsdasdas"};  //  字符串数组的本地对应的是一个指针数组，每一个元素对应的是一个指针（对应的是指向字符串的首地址），指向一个字符串。
//	str[0]="hello world";
//	str[0]='w';
//	printf("%c\n",str[0]); //  对应的是可以满足要求的，对应的是指针的处理操作的
//	//printf("%s\n",str[0]);  //asd,每一个元素对应的都是一个指向字符串的指针的。
//	//printf("%s\n",str[1]);  //asdas，每一个元素对应的都是一个指向字符串的指针的。
//	//printf("%s\n",str[2]);  //adsdasdas，每一个元素对应的都是一个指向字符串的指针的。
//
//	//  定义二维字符数组
//	//char  str[2][4]={"asd","12"}; //  需要注意的是字符串默认的含有\0的字符的。对应的是将常量区的字符串拷贝到了栈区数组。
//	//printf("%s\n",str); //  遇到\0结束打印输出。asd
//	//printf("%s\n",str[0]);
//	//printf("%s\n",str[1]);
//	system("pause");
//	return 0;
//}