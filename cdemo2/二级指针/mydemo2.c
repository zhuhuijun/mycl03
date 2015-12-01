#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int mem_init009(int **buf){
	*buf=malloc(100);
	return 1;
}

void maierrrrn()
{
	int *buf;//定义一个指针
	int ret=0;
	ret=mem_init009(&buf);
	printf("%d\n",buf);
	printf("%s\n","hello,world!");
	system("pause");

}