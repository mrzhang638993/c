//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char  str[3]="包";
//	char temp;
//	unsigned short  a;
//	//printf("%s\n",str);  // 输出的字符是: 包   符合要求。
//	//printf("%c%c\n",str[0],str[1]); // 输出的是包字符，符合要求的。%c之间是需要连接的，不能有空格存在的。
//	//  对应的中文是2个字符的，需要进行关注的。
//	//printf("%x,%x\n",str[0],str[1]); //  打印两个字节的,对应的是b0，fc打印的内容的。
//	//printf("%d,%d\n",str[0],str[1]); //  -80  -4 
//    //  获取汉字正确的编码，读取的操作对应的是从高位到低位读取的
//	temp=str[0];
//	str[0]=str[1];
//	str[1]=temp;
//	printf("%x,%hu\n",*(short*)str,*(short*)str);
//	a=*(short*)str;  // 记录对应的数值。  45308
//	system("pause");
//	return 0;
//}