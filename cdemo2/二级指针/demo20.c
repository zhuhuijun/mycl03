#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//�����ڴ�ĺ���
char **GetMemmmmmm(int num){
	int i=0;
	char **p2=NULL;
	p2=(char **)malloc(sizeof(char *)*num);
	if(p2==NULL){
		return NULL;
	}
	for( i=0;i<num;i++){
		p2[i]=(char *)malloc(sizeof(char)*100);//char buf[100]
		sprintf(p2[i],"%d%d%d",i+1,i+1,i+1);//д�ڴ���׵�ַ
	}
	return p2;
}
//�༶ָ��
int GetMem01(char ***p3,int num){
	int i=0;
	char **tmp=NULL;
	if(p3==NULL){//�ж�ָ���Ƿ���Null
		return -1;
	}
	tmp=(char **)malloc(sizeof(char *)*num);
	if(tmp==NULL){
		return 0;
	}
	for( i=0;i<num;i++){
		tmp[i]=(char *)malloc(sizeof(char)*100);//char buf[100]
		sprintf(tmp[i],"%d%d%d",i+1,i+1,i+1);//д�ڴ���׵�ַ
	}
	*p3=tmp;
	return 0;
}
//�ͷ��ڴ�ռ�
void freememmmm(char ***p3,int num){
	int i=0;
	char **tmp=NULL;	
	if(p3==NULL){
		return;
	}
	tmp = *p3;
	for (i=0;i<num;i++)
	{
		free(tmp[i]);
	}
	free(tmp);
	*p3=NULL;

}
//�༶ָ��
void mainmmmmmmmmmmmmmmmmmmm()
{
	char **p2=NULL;
	int num=5;
	int i=0;
	int j=0;
	char *tmp=NULL;
	char tmpbuf[100];
	GetMem01(&p2,num);
	for(i=0;i<num;i++){
		printf("%s\n",p2[i]);
	}
	//�ͷ��ڴ�ռ�
	freememmmm(&p2,num);
	printf("%s\n","hello,world!");
	system("pause");

}