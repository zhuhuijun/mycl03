#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//��ά����ı�ְ
void main()
{
	int a[3][5];
	int i=0;
	int j=0;
	int tmp=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			a[i][j]=tmp++;
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	printf("a��ά�������ƴ���:%d\n",a);
	printf("&a��ά����ĵ�ַ����:%d\n",&a);
	printf("a:%d,a+1:%d\n",a,a+1);
	printf("&a:%d,&a+1:%d\n",&a,&a+1);
	{
		//����һ��ָ�������ָ�����
		int (*pArray)[5];//���߱���������4���ֽڵ�ƽ̨
		pArray=a;
		for (i=0;i<3;i++)
		{
			for (j=0;j<5;j++)
			{
				printf("%d\n",pArray[i][j]);//��ά�����ָ��һ�������ָ�������һ����
			}
		}
	}

	printf("%s\n","hello,world!");
	system("pause");
}
//////////////////////////////////////////////////////////////////////////
//��ά����ı�ְ���� ����ָ��
//ÿ�������� ά��
//a+i����i�е��׵�ַ�൱��1ά����//����ָ��
//*(a+i)����1����ָ��