#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//多维数组的本职
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
	printf("a多维数组名称代表:%d\n",a);
	printf("&a多维数组的地址代表:%d\n",&a);
	printf("a:%d,a+1:%d\n",a,a+1);
	printf("&a:%d,&a+1:%d\n",&a,&a+1);
	{
		//定义一个指向数组的指针变量
		int (*pArray)[5];//告诉编译器分配4个字节的平台
		pArray=a;
		for (i=0;i<3;i++)
		{
			for (j=0;j<5;j++)
			{
				printf("%d\n",pArray[i][j]);//多维数组和指向一个数组的指针变量是一样的
			}
		}
	}

	printf("%s\n","hello,world!");
	system("pause");
}
//////////////////////////////////////////////////////////////////////////
//多维数组的本职就是 数组指针
//每次跳的是 维数
//a+i代表i行的首地址相当于1维数组//二级指针
//*(a+i)代表1级的指针