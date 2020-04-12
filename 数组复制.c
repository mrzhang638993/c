//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//int main(void)
//{
//	int a[5]={1,2,3,4,5};
//	//int b[5=a; //  对应的是存在错误的，数组的初始化必须使用{}
//	//int  b[5]={a};  //相当于对应的将a数组的首地址赋值给了b[0]元素的。存在问题的。
//	//int b[5];
//	//b=a;  // 对应的是存在问题的，b以及a对应的是常量的，不能这么做的？
//	//  对应的实现数组赋值的主要的操作逻辑和实现逻辑如下的：
//	//  方式一：使用循环的方式实现赋值操作的。
//	int b[5];
//	int i=0;
//	//int c[3];
//	for(i=0;i<5;i++){
//		b[i]=a[i];
//		printf("%d\n",b[i]);
//	}
//	//  实现复制部分元素,使用memcopy机制实现拷贝机制。
//	memcpy(b,a,sizeof(int)*5);  //  实现将a的内容拷贝到b中实现内存拷贝的机制的。
//	memcpy_s(&b[0],&a[0],sizeof(int)*5);
//	memcpy_s(&b[0],&a[2],sizeof(int)*3); //  需要注意操作内存的个数的，对应的存在内存越界的。
//	system("pause");
//	return 0;
//}