//#include <stdio.h>
//#include <stdlib.h>
//// ��Ӧ�Ķ���ָ��������������.*a��Ӧ�Ĵ�����ǵ�ַ�ģ���һ����Ҫ����ָ���
//int  fun(int *a ,int nlength)
//{
//	int  maxNum=a[0];
//	int  i;
//	for(i=0;i<nlength;i++)
//	{
//		if (*(a+i)>maxNum)
//		{
//			maxNum=a[i];
//		}
//		/*if (a[i]>maxNum)
//		{
//			maxNum=a[i];
//		}*/
//	}
//	return  maxNum;
//}
//int main(void)
//{
//	int a[5]={12,3,45,6,7};
//	int b[6]={23,45,12,76,4,6};
//	//int *p=&a[0];
//	//int *p1=&b[0];
//	/*int  maxNum=a[0];
//	int maxNumb=b[0];
//	int i;
//	int j;
//	for(i=1;i<5;i++)
//	{
//	if (a[i]>maxNum)
//	{
//	maxNum=a[i];
//	}
//	}
//	for(j=1;j<6;j++)
//	{
//	if (b[j]>maxNumb)
//	{
//	maxNumb=b[j];
//	}
//	}*/
//	printf("%d\n",fun(a,5)); //45
//	printf("%d\n",fun(b,6));  //76
//	system("pause");
//	return 0;
//}