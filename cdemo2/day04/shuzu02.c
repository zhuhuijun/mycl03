#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//数组类型指针：数组指针用于指向数组
void main9002()
{
	char *myarrk[]={"111111","22222","33333"};//指针数组
	//数组指针：一个数组指向指针
	int i=0;
	typedef int (MyArrayType)[5];//定义了数据类型是数组数据类型
	MyArrayType myarr;//int myarr[5];//类型定义变量
	MyArrayType *pArray;//定义一个指针变量  这个指针变量指向一个数组
	{
		int a;
		int *p;
		p=&a;
	}
	{
		//pArray=&myarr;
		int yArr2[5];//相当于一级指针
		pArray=&yArr2;//相当于二级指针
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