//#include <stdio.h>
//#include <stdlib.h>
//
//enum Color
//{
//	enum_red=45,
//	enum_black=34,
//	enum_white=20,
//	enum_blue=1,
//	enum_yellow=99
//};
//int main(void)
//{
//	//enum Color co=80;
//	enum Color co=enum_white;  //  声明枚举类型的变量,对应的是int类型的变量。使用枚举名称使用更加的方便的。
//	//int a=enum_white;  //  也是不会存在其他的问题的。不建议这么使用的。
//	printf("%d\n",co); //  对应的输出为20的变量
//	printf("%d\n",sizeof(enum_white));  //  输出为4，本质上是一个int的。
//	system("pause");
//	return 0;
//}