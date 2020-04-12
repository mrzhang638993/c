//#pragma pack(4)  //  手动的声明4字节进行内存存储的。可以设置往小的数字设置的。设置太大了就没有什么作用了
//#include <stdio.h>
//#include <stdlib.h>
//
//struct  Stu
//{
//	char c;  //  char 和int组成8字节的，double对应的是8字节，s对应的是2字节的，需要补充6个字节的。对应的补齐的时候需要考虑的是4位的。char+int>4 
//	int i;   
//	double d;
//	short s;
//};
////  所以，从小到达书写变量的话，是会节省内存空间的。
//struct  Stu1
//{
//	char c;   // char对应的是1个字节，short对应的是2个字节。1+2<4 ,所以整体的是8+8=16个字节的。前面的8字节对应的包括char，short，int的，后面的8字节对应的是double
//	short s;
//	int i;
//	double d;
//};
//
//struct  Stu2
//{
//	char c[6];   //对应的是需要8个字节的，需要的是内存补齐机制的
//	short s;     //  加到前面的char数组中的。总共8个字节的。
//	int i;
//};
//struct  Stu3
//{
//	char c[6];   //对应的是需要8个字节的，需要的是内存补齐机制的
//	int i;       //  需要4个字节的。
//	short s;     //  需要4个字节的
//};
//
//int main(void)
//{
//	//struct  Stu  stu={'a',24,23.23,(short)3};  //对应的是24个字节的。内存对齐的机制考虑的。
//	//printf("%d\n",sizeof(stu));
//	printf("%d\n",sizeof(struct  Stu));  //  使用类型可以计算出内存的大小的。对应的计算结果是24
//    printf("%d\n",sizeof(struct  Stu1));   //  对应的结果是16
//	 printf("%d\n",sizeof(struct  Stu2));   //  对应的输出结果为12
//	  printf("%d\n",sizeof(struct  Stu3));   //  对应的输出结果为16
//	//  结构体对齐规则：
//	//  1.以最大类型位字节对齐宽度；上面的结构体Stu，最大的是double，默认的是8字节的对齐宽度的。
//	//  2. 一次填补各个成员变量；
//	//  3.  结尾对齐。
//	system("pause");
//	return 0;
//}