#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
char gbuf[1000];//全局变量
int inverse09(char *p){
	if(p==NULL){
		return 0;
	}
	if(*p=='\0'){//递归结束判断
		return 1;
	}
	inverse09(p+1);//让字符串的每一个地址入栈
	printf("%c",*p);

}
//////////////////////////////////////////////////////////////////////////
//递归和全局变量
int inverse10(char *p){
	if(p==NULL){
		return 0;
	}
	if(*p=='\0'){//递归结束判断
		return 1;
	}
	inverse10(p+1);//让字符串的每一个地址入栈
	//copy运算结果
	//strncpy(gbuf,p,1);
	strncat(gbuf,p,1);

}
//////////////////////////////////////////////////////////////////////////
//局部变量
int inverse11(char *p,char *mybuf){
	if(p==NULL||mybuf==NULL){
		return 0;
	}
	if(*p=='\0'){//递归结束判断
		return 1;
	}
	inverse11(p+1,mybuf);//让字符串的每一个地址入栈
	//copy运算结果
	//strncpy(gbuf,p,1);
	strncat(mybuf,p,1);

}
void mainnm()
{
	char buf[]="abcde";
	//分配空间
	memset(gbuf,0,sizeof(gbuf));
	//inverse09(buf);
	inverse10(buf);
	printf("%s\n",gbuf);
	//局部变量
	{
		char mybuf[1024]={0};
		inverse11(buf,mybuf);
		printf("%s\n",mybuf);
	}

	printf("\n%s\n","hello,world!");
	system("pause");

}