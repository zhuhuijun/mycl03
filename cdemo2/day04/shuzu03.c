#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//定义数组指针变量的第三种写法
void mainmkl()
{
	typedef int (*PArrayType)[5];//定义数组指针类型
	PArrayType pArrayType;//变量//告诉编译器给我分配一个指针变量
	int c[5];
	int i=0;
	pArrayType=&c;
	for (i=0;i<5;i++)
	{
		//c[i]=i+1;
		(*pArrayType)[i]=i+1;
	}
	for (i=0;i<5;i++)
	{
		printf("%d\n",(*pArrayType)[i]);	
	}

	printf("%s\n","hello,world!");
	system("pause");

}