#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//�����ڴ�ģ�͵��ڴ�������ʾ��ͼ

void mainthis()
{
	int i=0;
	//ָ������
	char *p1[]={"123","456","789"};
	//��ά����
	char p2[3][4]={"123","456","789"};
	//�ֹ���ά�ڴ�
	char **p3=(char **)malloc(3*sizeof(char *));
	for (i=0;i<3;i++)
	{
		p3[i]=(char *)malloc(10*sizeof(char));
		sprintf(p3[i],"%d%d%d",i+1,i+1,i+1);
	}
	printf("%s\n","hello,world!");
	system("pause");

}