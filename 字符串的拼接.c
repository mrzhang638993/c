//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	//字符串的拼接操作
//	//char  str[20]="abc";  //  字符串数组初始化
//	//strcat(str,"hello");  // 将字符串hello增加到str上,存在内存写的操作的，对应的会出现内存问题。
//	//strcat_s(str,20,"hello"); //  20对应的是str的字节数信息
//	//strncat_s(str,20,"hello",2);  //  指定拷贝的长度。
//	//  下面对应的是数字字符串转整数的操作： atoi的字符
//	//int a=atoi("12345");  //  从前面开始转换前面的自己数字字符的。
//	//printf("%d\n",a);
//	//  下面执行的操作：需要将整数转化为字符串
//	char  str[20]={0};
//	//itoa(2345,str,2); // 采用二进制转换操作，100100101001
//	//_itoa_s(2345,str,20,10); // 需要指定str的长度字符串进行控制，20进行长度控制，主要解决的是越界问题的处理的。
//	//itoa(2345,str,10);  //  将2345转化为字符串，采用10进制的方式转化，存储到字符串str中
//	//sprintf(str,"%d,%c,%.2f",12,'v',12.3f); //  格式化指定的内容到字符串中存储,修改了str的版本的
//	sprintf_s(str,20,"%d,%c,%.2f",12,'v',12.3f);  //  对应的限制str的长度的。_s的函数的作用是一致的。
//	printf("%s\n",str); //  2345 输出
//	system("pause");
//	return 0;
//}