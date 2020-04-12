//#include <stdio.h>
//#include <stdlib.h>
//// 找到数组中的最大值然后返回
//int  find_max_number_from_array(int *p,int nLength,int *p1)
//{
//	int i;
//	int maxNum=*p;
//	for(i=1;i<nLength;i++)
//	{
//		if (p[i]>maxNum)
//		{
//			maxNum=p[i];
//		}
//	}
//	*p1=maxNum;
//	return maxNum;
//}
//int main(void)
//{
//	//  对应的执行相关的修改和操作
//	int a[6]={12,34,32,45,32,21};
//	int  n=0;
//	int maxNum=find_max_number_from_array(&a[0],6,&n); // 45
//	printf("%d\n",maxNum);
//	printf("%d\n",maxNum);
//	system("pause");
//	return 0;
//}