//#include <stdio.h>
//#include <stdlib.h>
//struct Teacher
//{
//	char teaName[10];
//	int teaAge;
//};
//int main(void)
//{
//	//struct Teacher tea[3]={{"С��",27},{"С��",27},{"С��",28}}; //����ṹ������
//	struct Teacher tea[3]={"С��",27,"С��",27,"С��",28}; //  �����������ռ�ģ�Ҳ��û������ġ���Ҫע�������Ҫһһ��Ӧ�ģ���Ȼ���Ͳ���Ӧ��
//	printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);
//	printf("%s,%d\n",tea[1].teaName,tea[1].teaAge);
//	printf("%s,%d\n",tea[2].teaName,tea[2].teaAge);
//	//  strcpyʵ���ַ����ĸ�ֵ�ģ�������ʹ�ø������ֽṹ���и�ֵ�ġ����ǲ��Ƽ��ġ�
//	// tea[0]=(struct Teacher){"adsd",23};  vs2010��֧�������﷨�����ġ�
//	strcpy_s(tea[0].teaName,10,"hello");
//	tea[0].teaAge=30;
//	printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);
//	system("pause");
//	return 0;
//}