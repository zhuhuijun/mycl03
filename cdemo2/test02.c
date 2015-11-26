#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main45(){
	char *p1=NULL;
	char *p2=NULL;
	p1=0x11;
	p2=0x22;
	//直接修改p1的值
	p1=0x111;
	//间接修改p2的值
	p2=&p1;

	*p2=100;
	printf("p1 :%d \n",p1);
	{
		*p2=200;
		printf("p2:%d \n",p2);

	}
	printf("p1 :%d \n",p1);
	system("pause");
}