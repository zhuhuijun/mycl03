#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//定义数组的另外的写法不是通过类型定义来实现的
void main()
{
	int (*pMyArr)[5];//直接定义一个指向数组的  数组指针变量   
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