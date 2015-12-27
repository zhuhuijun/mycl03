#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main()
{
	int a[]={1,2};//隐式指定长度
	int b[10]={1,2};//显示指定长度
	int c[100]={0};//初始化为0//编译器编译的时候为0//这个的初始化速度块
	memset(c,0,sizeof(c));//初始化//显示的重置内存块
	//对于一维数组C的规定
	//c是数组首元素的地址//c+1 步长 int 4
	//&c是整个数组的地址//&c+1   100*4 400
	//数组首元素的地址和数组的地址值相等
	printf("%d\n",c);


	printf("%d\n",&c);
	printf("%s\n","hello,world!");
	system("pause");

}