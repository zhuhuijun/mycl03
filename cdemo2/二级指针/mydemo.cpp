#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//c语言中函数传递参数都是传递值的
void change(int *tmp){
	//tmp是地址
	printf("%d\n",tmp);//这是地址
	printf("%d\n",*tmp);//这是值
	*tmp=100;
}

void mainjjjj()
{
	int a=10;
	printf("%d\n",&a);//这是地址
	change(&a);
	printf("a:%d\n",a);
	printf("%s\n","hello,world!");
	system("pause");

}