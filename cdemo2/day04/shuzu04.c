#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//��������������д������ͨ�����Ͷ�����ʵ�ֵ�
void main()
{
	int (*pMyArr)[5];//ֱ�Ӷ���һ��ָ�������  ����ָ�����   
	int c[5];
	int i=0;
	pMyArr=&c;
	for (i=0;i<5;i++)
	{
		(*pMyArr)[i]=i+1;
	}
	for (i=0;i<5;i++)
	{
		printf("%d\n",(*pMyArr)[i]);
	}
	printf("%s\n","hello,world!");
	system("pause");

}