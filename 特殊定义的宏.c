#include <stdio.h>
#include <stdlib.h>
// ��Ҫע�����\�ĺ��治Ҫ���ӿո���������������ݵ�(����ע�ͣ�����������ġ�
#define SUM(x,y)  x+y  \
+3+5
#define PRI   printf("asd\n");\
	printf("qwe\n");
#define NUM(x) #x   //  x��Ӧ��Ĭ�ϵ�ת����Ϊ�ַ�����
#define CONCAT(x,y)  #x ## #y   // ƴ���ַ���x�Լ��ַ���y��һЩԴ������ʹ�õıȽϵĶ�ģ�������ʹ�õıȽϵ��ٵġ�

int main(void)
{
	printf("%d\n",SUM(2,4));
	PRI;
	printf("%s\n",NUM(6));  //  ��ӡ�ַ�����ʹ�õ�ʱ�����Ҫʹ�õ�%s������ġ�
	printf("%s\n",NUM(asdefghijk));
	printf("%s\n",CONCAT(6,8));  //  ���Ϊ68�����ݽṹ
	system("pause");
	return 0;
}