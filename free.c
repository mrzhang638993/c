//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <memory.h>
//
//int main(void)
//{
//	int *p=(int*)malloc(4u);
//	*p=12;
//	printf("%d,%p\n",*p,p);
//	free(p);  //�ͷ��ڴ�ռ䣬�ͷŵ��ڴ�ռ�ֻ�ǽ����˲���ϵͳ���ѵġ������ĵ�ַ���ǵ�ַ��û�б仯�ġ�p��Ӧ���ǻ���ԭ���ĵ�ַ��
//	printf("%d\n,%p\n",*p,p);//  �ͷ�֮�󣬶�Ӧ���Ѿ�û�������ݵġ�
//	p=NULL; //  ָ�븳ֵΪnull����һ���ܺõ�ϰ�ߵġ�
//	if (p==NULL)
//	{
//		//  ʹ��ָ����֮ǰ��ҪУ��ָ���Ƿ�Ϊ�յġ�
//	}
//	printf("%d\n,%p\n",*p,p);
//	system("pause");
//	return 0;
//}