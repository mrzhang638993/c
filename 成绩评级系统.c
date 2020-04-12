//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//   int  score=0;
//   printf("欢迎使用成绩评级系统\n");
//   while (1)
//   {
//	   scanf_s("%d",&score);
//	   if (score==-1)
//	   {
//		   break;
//	   }
//	   if (score>100||score<0)
//	   {
//		   printf("用户输入非法,请重新输入\n"); 
//		   continue;
//	   }
//	   if (score<60)
//	   {
//		   printf("不及格\n");
//	   }
//	   else if (score>=60&&score<70)
//	   {
//		   printf("良\n");
//	   }
//	   else if (score>=70&&score<80)
//	   {
//		   printf("良好\n");
//	   }
//	   else  if (score>=80&&score<90)
//	   {
//		   printf("优\n");
//	   }
//	   else if (score>=90&& score<=100)
//	   {
//		   printf("超级牛\n");
//	   }
//	   printf("请继续输入:\n");
//   }
//	system("pause");
//	return  0;
//}