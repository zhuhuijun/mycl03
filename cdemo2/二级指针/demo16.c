#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
void mainted()
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
				strcpy(tmpbuf,myArr[i]);//���������ڴ��
				strcpy(myArr[i],myArr[j]);
				strcpy(myArr[j],tmpbuf);
			}
		}
	}
	printf("%s\n",">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
	printf("%s\n","hello,world!");
	system("pause");
}
//////////////////////////////////////////////////////////////////////////
//��ӡ
void printMyArr02(char myArr[10][30],int num){//�������ڴ���׵�ַ
	int i=0;
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
}
//����
void sortMy(char myArr[10][30],int num){
	int i=0;
	int j=0;
	char tmpbuf[30];
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				strcpy(tmpbuf,myArr[i]);//���������ڴ��
				strcpy(myArr[i],myArr[j]);
				strcpy(myArr[j],tmpbuf);
			}
		}
	}

}
//////////////////////////////////////////////////////////////////////////
void mainmn0()
{

	int num=4;
	char myBuf[30];


	char myArr[10][30]={"aaaaaaaaa","bb","cccc","3333"};
	printMyArr02(myArr,num);
	sortMy(myArr,num);
	printf("%s\n",">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printMyArr02(myArr,num);
	printf("%s\n","hello,world!");
	system("pause");
}