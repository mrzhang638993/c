//#include <stdio.h>
//#include <stdlib.h>
//
//int  main(void)
//{
//	char c;  //  对应的输入方式是如下的： cd  字符之间不要增加空格的，否则存在问题的。空格特使会作为一个字符赋值的。
//    char d;
//	scanf("%c",&c); // 输入字符c,输入完毕之后对应的需要输入回车键的。
//	setbuf(stdin,NULL); 
//	scanf("%c",&d);
//	printf("%c\n",c);
//	printf("%c\n",d);
//	//字符缓冲区中的\n 会对于下一次的输入产生影响的，需要注入这样的情况，解决的办法如下的：
//	setbuf(stdin,NULL);  //  清理输入缓冲区的内容
//	system("pause");
//	return 0;
//}