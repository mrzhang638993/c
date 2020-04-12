//#include <stdio.h>
//#include <stdlib.h>
//struct Teacher
//{
//	char teaName[10];
//	int teaAge;
//};
//int main(void)
//{
//	//struct Teacher tea[3]={{"小包",27},{"小东",27},{"小华",28}}; //定义结构体数组
//	struct Teacher tea[3]={"小包",27,"小东",27,"小华",28}; //  数组是连续空间的，也是没有问题的。需要注意的是需要一一对应的，不然类型不对应的
//	printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);
//	printf("%s,%d\n",tea[1].teaName,tea[1].teaAge);
//	printf("%s,%d\n",tea[2].teaName,tea[2].teaAge);
//	//  strcpy实现字符串的赋值的，还可以使用复合文字结构进行赋值的。但是不推荐的。
//	// tea[0]=(struct Teacher){"adsd",23};  vs2010不支持这种语法操作的。
//	strcpy_s(tea[0].teaName,10,"hello");
//	tea[0].teaAge=30;
//	printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);
//	system("pause");
//	return 0;
//}