//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//int main(void)
//{
//	// realloc ���·����ڴ�ռ��С�����ֽڶ�Ӧ���Ǳ�֤һ���ġ�
//	int *p=(int*)malloc(12u); //  ��Ӧ�ķ���12���ֽڵ��ڴ�ռ�
//	int *p1=(int *)realloc(p,20); //  ���·����ڴ�ռ䣬���ؿռ���׵�ַ�ġ�realloc���»����ڴ�ռ�֮���Ӧ�����ֽڵ�ַ�����仯�ˡ�
//    //   realloc �����ڴ���Ƭ�ϵĻ�����Ӧ�Ļ��л��������������ڴ������ϵġ�
//	if (p1==NULL)
//	{
//		printf("�ڴ����ʧ��");
//	}
//	printf("%d\n",_msize(p1));  //  ��ȡ������ڴ��ֽ����֣�
//	if (p==p1)
//	{
//       free(p1);
//	}else{
//		 free(p1);
//		 free(p);
//	}
//	system("pause");
//	return 0;
//}