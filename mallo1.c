//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <memory.h>
//
//int main(void)
//{
//	//int *p;
//	//p=(int*)malloc(4u);
//	//printf("%p\n",p);
//	//*p=0; // malloc��Ӧ�Ŀռ䲻���Զ��ĸ�ֵ�ͳ�ʼ���ģ���Ҫ�ֶ��ĸ�ֵ�ͳ�ʼ��������
//	//printf("%d\n",*p);
//
//	//  ������Ե��Ƿ������ռ���������ص����ݵ��߼������
//	int  *p1=(int *)malloc(40u);
//	int i=0;
//	//for(i=0;i<10;i++){
//	//	*(p1+i)=0; //  ָ��ÿ���ƶ�4���ֽڵ�����
//	//}
//	//for(i=0;i<10;i++){
//	//	printf("%d\n",p1[i]);
//	//}
//	//  memset  ��Ӧ�Ŀ��Խ��ڴ�ռ��е�ÿһ���ֽڶ�Ӧ������Ϊ0
//	memset(p1,0,40);  //  �ֽڸ�ֵ�ģ�����int���ԣ�ÿ���ֽڶ�Ӧ�Ķ��ḳֵΪ1�ġ�����0֮��ĸ�ֵ��Ӧ�Ķ����������ġ�
//	for(i=0;i<10;i++){
//		printf("%d\n",p1[i]);
//	}
//	system("pause");
//	return 0;
//}