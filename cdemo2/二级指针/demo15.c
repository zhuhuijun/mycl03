#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
void mainhjjj()
{
	int i=0;
	int j=0;
	int num=0;
	char *tmp=NULL;
	//���� �����е�ÿһ��Ԫ����ָ�� ָ������
	//��һ���ڴ�ģ��
	char *myArr[]={"aaaaaa","bbbbbbb","cccccccc","2222222222222"};
	num=sizeof(myArr)/sizeof(myArr[0]);
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
	//����
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//������������Ԫ�أ���������ָ���ֵ
				myArr[j]=tmp;
			}
		}
	}
	printf("%s\n","=============================================");
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
	printf("%s\n","hello,world!");
	system("pause");

}
//////////////////////////////////////////////////////////////////////////
//��ӡ
void printMyArr(char **myArr,int num){//�������ڴ���׵�ַ
	int i=0;
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
}
//����
void sortMyArr(char **myArr,int num){
	int i=0;
	int j=0;
	char *tmp=NULL;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//������������Ԫ�أ���������ָ���ֵ
				myArr[j]=tmp;
			}
		}
	}
}
//////////////////////////////////////////////////////////////////////////��һ���ڴ�ģ��
void mainiooo()
{
	int i=0;
	int j=0;
	int num=0;
	char *tmp=NULL;
	//���� �����е�ÿһ��Ԫ����ָ�� ָ������
	//��һ���ڴ�ģ��
	char *myArr[]={"aaaaaa","bbbbbbb","cccccccc","2222222222222"};
	num=sizeof(myArr)/sizeof(myArr[0]);
	printMyArr(myArr,num);
	//����
	sortMyArr(myArr,num);
	printf("%s\n","=============================================");
	printMyArr(myArr,num);
	printf("%s\n","hello,world!");
	system("pause");

}