//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//// ��Ӧ���ǿɱ������ȡֵ����
//void  fun(int a,...)  // a ��Ӧ�����ֳ������ǲ����ĸ�����Ϣ
//{
//	va_list ap;  //  ��������б�
//	va_start(ap,a);  //  ��Ӧ����ɿɱ�����������б��ת������
//	printf("%d\n",va_arg(ap,int));  //  �Ӳ����б���ȡֵ��va_argֻ�ܹ�˳��ȡֵ�ģ�ȡ�����Ļ���Ӧ�ľ�û����
//	printf("%lf\n",va_arg(ap,double)); 
//	printf("%d\n",va_arg(ap,int));
//	//  printf("%d,%d,%d\n",4,5,6); // ��Ӧ��Ҳ�ǿɱ�����ĺ����ġ�
//}
////  ����������ȷ���ĺ���
//int main(void)
//{
//	fun(3,12,34.34,56);
//	system("pause");
//	return 0;
//}