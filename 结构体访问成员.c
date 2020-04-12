#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// 定义结构体成员，结构体成员类似于java中的类以及对象的，体现出来的按照需要构造数据结构。
//struct  Stu
//{
//	char name[10]; //  定义名称
//	int age;
//	double high;
//	char  num[20];
//};
////  结构体成员的访问
//int  main(void)
//{
//	struct  Stu  stu={"mrzhang",29,1.9,"20091010"};  //  结构体成员的初始化
//	//  或者是采用这样的方式实现赋值操作的
//	//stu=(struct  Stu){"C3",28,1.8,"helloworld"}; //  是最新的，编译器不一定支持的。
//	//struct  Stu *p=&stu;  //定义结构体指针变量p指向了结构体的空间。
//	struct  Stu  *p=(struct  Stu *)malloc(sizeof(struct  Stu));
//	//p->name="mrzhang1";
//	// （*p).age=28;  *p==stu  。 p对应的是自己的另外的一个内存空间的。.对应的是自己的内存空间本身的使用的。
//	//  使用地址访问需要使用到箭头的，使用实例本身对应的是采用.号进行访问的。
//	strcpy(p->name,"mrzhang1");  // 字符数组不能直接赋值操作的
//	p->age=28;
//	p->high=1.85;
//	strcpy_s(p->num,20,"helloworld");
//	//strcpy(p->num,"hello world");
//	//p->num="hello world";
//	//stu.name="mrzhang-1";  // stu.name对应的是不是变量的，是一个字符数组的，不能这么赋值操作的
//	// *(stu.name)="hello";  字符数组的赋值操作需要关注一下
//	//printf("%s,%d,%.2lf,%s\n",stu.name,stu.age,stu.high,stu.num);  //  访问结构体成员的实例变量
//	//printf("%s,%d,%.2lf,%s\n",p->name,p->age,p->high,p->num); //  结构体指针访问。
//	//  .以及*的优先级高于&的优先级的，所以操作的时候需要关注的。.以及*对应的都是运算符的。
//	printf("%s,%d,%.2lf,%s\n",p->name,(*p).age,p->high,p->num); 
//	system("pause");
//	return 0;
//}