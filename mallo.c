//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//int  main(void)
//{
//	int *p=(int*)malloc(4u);
//	// malloc  ����ռ�ʧ�ܵĻ�����Ӧ�Ļ᷵��NULL����Ӧ����ֵΪ0�ģ���������ռ��ʱ����Ҫ�����жϵġ�
//	//int *p=(int*)malloc(4);  //�������ڴ�ռ�ģ���Ӧ�Ļ�ȡ����Ӧ���׵�ַ�ġ�
//	//*p=12;
//	//  size_t ��Ӧ���� unsigned int �������������ʺ�unsigned int��һ���ġ�win32��Ӧ����4�ֽڵģ�x64�ı�������Ӧ����8�ֽڵ�
//	//printf("%d\n",*p);
//	//  ִ�ж�Ӧ���߼��������
//	int *p1=(int *)malloc(2u*1024u*1024u*1024u); // ���γ����������Ӧ��ʹ��unsigned  int�ķ�ʽ���ʡ�
//	// 0x000000 ��Ӧ�Ŀ������Ϊû�пռ���Խ�����������ģ�û���ڴ�ռ���з��䡣
//	if (p1==NULL)
//	{
//		printf("����ռ�ʧ��\n");
//	}
//	system("pause");
//	return  0;
//}