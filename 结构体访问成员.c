#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// ����ṹ���Ա���ṹ���Ա������java�е����Լ�����ģ����ֳ����İ�����Ҫ�������ݽṹ��
//struct  Stu
//{
//	char name[10]; //  ��������
//	int age;
//	double high;
//	char  num[20];
//};
////  �ṹ���Ա�ķ���
//int  main(void)
//{
//	struct  Stu  stu={"mrzhang",29,1.9,"20091010"};  //  �ṹ���Ա�ĳ�ʼ��
//	//  �����ǲ��������ķ�ʽʵ�ָ�ֵ������
//	//stu=(struct  Stu){"C3",28,1.8,"helloworld"}; //  �����µģ���������һ��֧�ֵġ�
//	//struct  Stu *p=&stu;  //����ṹ��ָ�����pָ���˽ṹ��Ŀռ䡣
//	struct  Stu  *p=(struct  Stu *)malloc(sizeof(struct  Stu));
//	//p->name="mrzhang1";
//	// ��*p).age=28;  *p==stu  �� p��Ӧ�����Լ��������һ���ڴ�ռ�ġ�.��Ӧ�����Լ����ڴ�ռ䱾���ʹ�õġ�
//	//  ʹ�õ�ַ������Ҫʹ�õ���ͷ�ģ�ʹ��ʵ�������Ӧ���ǲ���.�Ž��з��ʵġ�
//	strcpy(p->name,"mrzhang1");  // �ַ����鲻��ֱ�Ӹ�ֵ������
//	p->age=28;
//	p->high=1.85;
//	strcpy_s(p->num,20,"helloworld");
//	//strcpy(p->num,"hello world");
//	//p->num="hello world";
//	//stu.name="mrzhang-1";  // stu.name��Ӧ���ǲ��Ǳ����ģ���һ���ַ�����ģ�������ô��ֵ������
//	// *(stu.name)="hello";  �ַ�����ĸ�ֵ������Ҫ��עһ��
//	//printf("%s,%d,%.2lf,%s\n",stu.name,stu.age,stu.high,stu.num);  //  ���ʽṹ���Ա��ʵ������
//	//printf("%s,%d,%.2lf,%s\n",p->name,p->age,p->high,p->num); //  �ṹ��ָ����ʡ�
//	//  .�Լ�*�����ȼ�����&�����ȼ��ģ����Բ�����ʱ����Ҫ��ע�ġ�.�Լ�*��Ӧ�Ķ���������ġ�
//	printf("%s,%d,%.2lf,%s\n",p->name,(*p).age,p->high,p->num); 
//	system("pause");
//	return 0;
//}