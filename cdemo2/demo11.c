#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
char gbuf[1000];//ȫ�ֱ���
int inverse09(char *p){
	if(p==NULL){
		return 0;
	}
	if(*p=='\0'){//�ݹ�����ж�
		return 1;
	}
	inverse09(p+1);//���ַ�����ÿһ����ַ��ջ
	printf("%c",*p);

}
//////////////////////////////////////////////////////////////////////////
//�ݹ��ȫ�ֱ���
int inverse10(char *p){
	if(p==NULL){
		return 0;
	}
	if(*p=='\0'){//�ݹ�����ж�
		return 1;
	}
	inverse10(p+1);//���ַ�����ÿһ����ַ��ջ
	//copy������
	//strncpy(gbuf,p,1);
	strncat(gbuf,p,1);

}
//////////////////////////////////////////////////////////////////////////
//�ֲ�����
int inverse11(char *p,char *mybuf){
	if(p==NULL||mybuf==NULL){
		return 0;
	}
	if(*p=='\0'){//�ݹ�����ж�
		return 1;
	}
	inverse11(p+1,mybuf);//���ַ�����ÿһ����ַ��ջ
	//copy������
	//strncpy(gbuf,p,1);
	strncat(mybuf,p,1);

}
void mainnm()
{
	char buf[]="abcde";
	//����ռ�
	memset(gbuf,0,sizeof(gbuf));
	//inverse09(buf);
	inverse10(buf);
	printf("%s\n",gbuf);
	//�ֲ�����
	{
		char mybuf[1024]={0};
		inverse11(buf,mybuf);
		printf("%s\n",mybuf);
	}

	printf("\n%s\n","hello,world!");
	system("pause");

}