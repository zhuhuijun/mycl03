#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////�������ڴ�ģ��
void main999999()
{
	char **p2=NULL;
	int num=5;
	int i=0;
	int j=0;
	char *tmp=NULL;
	char tmpbuf[100];
	p2=(char **)malloc(sizeof(char *)*num);
	for( i=0;i<num;i++){
		p2[i]=(char *)malloc(sizeof(char)*100);//char buf[100]
		sprintf(p2[i],"%d%d%d",i+1,i+1,i+1);//д�ڴ���׵�ַ
	}
	//��ӡ
	for(i=0;i<num;i++){
		printf("%s\n",p2[i]);
	}
	//����//��������ָ���ָ��
	//for(i=0;i<num;i++){
	//	for(j=i+1;j<num;j++){
	//		if(strcmp(p2[j],p2[i])>0){
	//			tmp=p2[i];
	//			p2[i]=p2[j];//��������ָ��
	//			p2[j]=tmp;
	//		}
	//	}
	//}
	//���������ڴ��ֵ
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(strcmp(p2[j],p2[i])>0){
				strcpy(tmpbuf,p2[i]);
				strcpy(p2[i],p2[j]);
				strcpy(p2[j],tmpbuf);
			}
		}
	}
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	//��ӡ
	for(i=0;i<num;i++){
		printf("%s\n",p2[i]);
	}
	//�ͷ�
	for(i=0;i<num;i++){
		if(p2[i]!=NULL){
			free(p2[i]);
			p2[i]=NULL;
		}
	}
	if(p2!=NULL){
		free(p2);
	}
	printf("%s\n","hello,world!");
	system("pause");

}
//////////////////////////////////////////////////////////////////////////
//�����ڴ�ĺ���
char **GetMem(int num){
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
//��ӡ
void printMyArr03(char **myArr,int num){//�������ڴ���׵�ַ
	int i=0;
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
}
//����
void sortMyArr03(char **myArr,int num){
	int i=0;
	int j=0;
	char *tmp=NULL;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])<0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//������������Ԫ�أ���������ָ���ֵ
				myArr[j]=tmp;
			}
		}
	}
}
//�ͷ��ڴ�ռ�
void mem_free(char **p2,int num ){
	int i=0;
	for(i=0;i<num;i++){
		if(p2[i]!=NULL){
			free(p2[i]);
			p2[i]=NULL;
		}
	}
	if(p2!=NULL){
		free(p2);
	}
}
void mainhakhgkahg()
{
	char **p2=NULL;
	int num=5;
	int i=0;
	int j=0;
	char *tmp=NULL;
	char tmpbuf[100];
	p2=GetMem(num);
	//��ӡ
	printMyArr03(p2,num);
	//����//��������ָ���ָ��
	//for(i=0;i<num;i++){
	//	for(j=i+1;j<num;j++){
	//		if(strcmp(p2[j],p2[i])>0){
	//			tmp=p2[i];
	//			p2[i]=p2[j];//��������ָ��
	//			p2[j]=tmp;
	//		}
	//	}
	//}
	//���������ڴ��ֵ
	sortMyArr03(p2,num);
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	//��ӡ
	printMyArr03(p2,num);
	//�ͷ�
	mem_free(p2,num);
	printf("%s\n","hello,world!");
	system("pause");

}