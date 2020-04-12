//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	//  输入 aBcDefGH  ----->转化为 AbCdEFgh
//	// 输入的整数转换成为相反的，大写的转化成为小写的，小写的转换成为大写的。
//	while(1)
//	{
//		//  对应的需要一个统计输入的字符的信息的
//       char c;
//	   c=getchar(); // 对应的是单个的字符
//	   if ('\n'==c||EOF==c)
//	   {
//		   break;
//	   }else{
//		   if (c>='a'&&c<='z')
//		   {
//			   c=c-32; //  小写转化为大写
//			   printf("%c",c);
//		   }else if (c>='A'&&c<='Z')
//		   {
//			   c=c+32;
//			   printf("%c",c);
//		   }
//	   }
//	}
//	system("pause");
//	return 0;
//}