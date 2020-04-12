//#include <stdio.h>
//#include <stdlib.h>
//// 声明一个有名称的枚举变量。枚举的本质：一组有名字的int常数，给整数配置名称的。下面的这些名称对应的是常量的。使用enum_red可以打印出来0.
////  可以指定所有的枚举的常量数值。需要注意的是枚举的名称需要唯一的，不同的枚举之间名称也是要唯一的。作用的范围是全局可见的。
//enum  Color
//{
//	enum_red=20,   //  默认对应的是0，指定数值的话，起点就从指定数字开始。
//	enum_black, // 默认对应的是1
//	enum_white=40, // 默认对应的是2，可以从指定的位置开始计数。
//	enum_blue,  // 默认对应的是3
//	enum_yellow // 默认对应的是4
//};
//int main(void)
//{
//	printf("%d,%d,%d,%d,%d\n",enum_red,enum_black,enum_white,enum_blue,enum_yellow);  //枚举型的常量的打印
//	system("pause");
//	return  0;
//}