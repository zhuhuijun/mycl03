#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//c�����к������ݲ������Ǵ���ֵ��
void change(int *tmp){
	//tmp�ǵ�ַ
	printf("%d\n",tmp);//���ǵ�ַ
	printf("%d\n",*tmp);//����ֵ
	*tmp=100;
}

void mainjjjj()
{
	int a=10;
	printf("%d\n",&a);//���ǵ�ַ
	change(&a);
	printf("a:%d\n",a);
	printf("%s\n","hello,world!");
	system("pause");

}