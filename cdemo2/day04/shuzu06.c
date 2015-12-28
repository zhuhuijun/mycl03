#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//多维数组做函数参数的指针退化过程
void printArr001(int b[3][5])
{
	int i=0;
	int j=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d\n",b[i][j]);
		}
	}

}
//////////////////////////////////////////////////////////////////////////
void printArr002(int b[][5])
{
	int i=0;
	int j=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d\n",b[i][j]);
		}
	}

}
//////////////////////////////////////////////////////////////////////////
void printArr003(int (*b)[5])
{
	int i=0;
	int j=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d\n",b[i][j]);
		}
	}

}
//////////////////////////////////////////////////////////////////////////
void main()
{
	//a[i][j]===>*(*(a+i)+j)
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
	printf("111111111111111111111\n");
	printArr001(a);
	printf("222222222222222222222\n");
	printArr002(a);
	printf("333333333333333333333\n");
	printArr003(a);
	printf("%s\n","hello,world!");
	system("pause");

}