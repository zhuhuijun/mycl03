#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main()
{
	int a[]={1,2};//��ʽָ������
	int b[10]={1,2};//��ʾָ������
	int c[100]={0};//��ʼ��Ϊ0//�����������ʱ��Ϊ0//����ĳ�ʼ���ٶȿ�
	memset(c,0,sizeof(c));//��ʼ��//��ʾ�������ڴ��
	//����һά����C�Ĺ涨
	//c��������Ԫ�صĵ�ַ//c+1 ���� int 4
	//&c����������ĵ�ַ//&c+1   100*4 400
	//������Ԫ�صĵ�ַ������ĵ�ֵַ���
	printf("%d\n",c);


	printf("%d\n",&c);
	printf("%s\n","hello,world!");
	system("pause");

}