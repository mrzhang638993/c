//#include <stdio.h>
//#include <stdlib.h>
////  定义结构体
//struct  Stu
//{
//	char name[10];
//	int age;
//};
//// 结构体嵌套逻辑，结构体中的一个成员变量是一个结构体的
//struct  Teacher
//{
//   char teaName[10];
//   struct Stu  st;
//   int teaAge;
//};
////  结构体嵌套：一个结构体的成员是另外的一个结构体的。
//int main(void)
//{
//	//struct Teacher  teacher={"mrzhang","mrzhang1",28,29};  // 定义一个结构体成员
//	struct Teacher  teacher={"mrzhang",{"mrzhang1",28},29};
//	printf("%s,%s,%d,%d\n",teacher.teaName,teacher.st.name,teacher.st.age,teacher.teaAge);
//	system("pause");
//	return 0;
//}