//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char  str[3]="��";
//	char temp;
//	unsigned short  a;
//	//printf("%s\n",str);  // ������ַ���: ��   ����Ҫ��
//	//printf("%c%c\n",str[0],str[1]); // ������ǰ��ַ�������Ҫ��ġ�%c֮������Ҫ���ӵģ������пո���ڵġ�
//	//  ��Ӧ��������2���ַ��ģ���Ҫ���й�ע�ġ�
//	//printf("%x,%x\n",str[0],str[1]); //  ��ӡ�����ֽڵ�,��Ӧ����b0��fc��ӡ�����ݵġ�
//	//printf("%d,%d\n",str[0],str[1]); //  -80  -4 
//    //  ��ȡ������ȷ�ı��룬��ȡ�Ĳ�����Ӧ���ǴӸ�λ����λ��ȡ��
//	temp=str[0];
//	str[0]=str[1];
//	str[1]=temp;
//	printf("%x,%hu\n",*(short*)str,*(short*)str);
//	a=*(short*)str;  // ��¼��Ӧ����ֵ��  45308
//	system("pause");
//	return 0;
//}