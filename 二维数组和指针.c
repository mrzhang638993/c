//#include <stdio.h>
//#include <stdlib.h>
//
//int  main(void)
//{
//	int a[2][3]={{3,5,7},{1,4,8}};
//	int i,
//		j;
//	//printf("%d\n",&a[1][1])
//	int  *p=&a[1][1];   
//	int (*p1)[3]=&a[1];  //  一维数组指针定义
//	int  (*p2)[2][3]=&a; // 二维数组的指针的定义
//	//  实现指针遍历二维数组
//	//  *p2==a
//	printf("%d\n",*p2==a);
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\n",(*p2)[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}