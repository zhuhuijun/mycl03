#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//��������ָ�룺����ָ������ָ������
void main9002()
{
	char *myarrk[]={"111111","22222","33333"};//ָ������
	//����ָ�룺һ������ָ��ָ��
	int i=0;
	typedef int (MyArrayType)[5];//����������������������������
	MyArrayType myarr;//int myarr[5];//���Ͷ������
	MyArrayType *pArray;//����һ��ָ�����  ���ָ�����ָ��һ������
	{
		int a;
		int *p;
		p=&a;
	}
	{
		//pArray=&myarr;
		int yArr2[5];//�൱��һ��ָ��
		pArray=&yArr2;//�൱�ڶ���ָ��
		for (i=0;i<5;i++)
		{
			//yArr2[i]=i+1;
			(*pArray)[i]=i+1;
		}

		for (i=0;i<5;i++)
		{
			printf("%d\n",(*pArray)[i]);	
		}
	
	}
	printf("%s\n","hello,world!");
	system("pause");

}