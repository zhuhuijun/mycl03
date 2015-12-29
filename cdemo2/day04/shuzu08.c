#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int  mainhhhhhhh(int argc,char* argv[],char**env)
{
	int i=0;
	printf("*********************Begin argv************************\n");
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	printf("*********************End argv**************************\n");
	printf("\n");
	printf("*********************Begin env************************\n");
	for(i=0;env[i]!='\0';i++)
	{
		printf("%s\n",env[i]);
	}
	printf("*********************End env**************************\n");
	printf("%s\n","hello,world!");
	system("pause");

}