#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
void main()
{
	int i=0;
	int j=0;
	int num=4;
	char myBuf[30];
	char tmpbuf[30];

	char myArr[10][30]={"aaaaaaaaa","bb","cccc","3333"};
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				strcpy(tmpbuf,myArr[i]);
				strcpy(myArr[i],myArr[j]);
				strcpy(myArr[j],tmpbuf);
			}
		}
	}
	printf("%s\n","hello,world!");
	system("pause");

}