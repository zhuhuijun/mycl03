#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void mainbkjl()
{
	int a[]={1,2};//隐式指定长度
	int b[10]={1,2};//显示指定长度
	int c[100]={0};//初始化为0//编译器编译的时候为0//这个的初始化速度块
	memset(c,0,sizeof(c));//初始化//显示的重置内存块
	//对于一维数组C的规定
	//c是数组首元素的地址//c+1 步长 int 4
	//&c是整个数组的地址//&c+1   100*4 400
	//数组首元素的地址和数组的地址值相等
	//固定大小内存块的别名
	printf("%d\n",c);
	printf("%d\n",&c);
	printf("%s\n","hello,world!");
	system("pause");

}
//怎样表达int a[10]这种数据类型
//类型本职:固定大小内存块的别名
//定义数组类型
void mainjfaljgalg(){
	int i=0;
	typedef int (MyArrayType)[10];//定义了数据类型是数组数据类型
	MyArrayType myarr;//int myarr[5];
	for (i=0;i<5;i++)
	{
		myarr[i]=i+1;
	}
	for (i=0;i<5;i++)
	{
		printf("%d\n",myarr[i]);
	}
	printf("myarr代表数组首元素地址:%d\n",myarr);
	printf("myarr+1步长为4:%d\n",myarr+1);
	printf("&myarr代表数组地址:%d\n",&myarr);
	printf("&myarr+1步长为20:%d\n",&myarr+1);
	printf("%s\n","hello,world!");
	system("pause");
}