#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//三种内存模型的内存四区的示意图

void mainthis()
{
	int i=0;
	//指针数组
	char *p1[]={"123","456","789"};
	//二维数组
	char p2[3][4]={"123","456","789"};
	//手工二维内存
	char **p3=(char **)malloc(3*sizeof(char *));
	for (i=0;i<3;i++)
	{
		p3[i]=(char *)malloc(10*sizeof(char));
		sprintf(p3[i],"%d%d%d",i+1,i+1,i+1);
	}
	printf("%s\n","hello,world!");
	system("pause");

}