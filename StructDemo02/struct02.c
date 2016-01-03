#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
////
int sort(char **myp1,int num1,char (*myp2)[30],int num2,char ***myp3,int *num3){
	char **p3=NULL;
	int i,j,k=0;
	int tmp=0;
	char *tmpP=NULL;
	p3=(char **)malloc((num1+num2)*sizeof(char *));//����װ����ָ��
	if(p3==NULL)
	{
		return -1;
	}
	//�����ַ����ĳ��ȷ����ڴ�
	for (i=0;i<num1;i++)
	{
		tmp=strlen(myp1[i])+1;
		p3[i]=(char *)malloc(tmp*sizeof(char));
		if (p3[i]==NULL)
		{
			return -2;
		}
		strcpy(p3[i],myp1[i]);
	}
	for (j=0;j<num2;j++,i++)
	{
		tmp=strlen(myp2[j])+1;
		p3[i]=(char *)malloc(tmp*sizeof(char));
		if(p3[i]==NULL)
		{
			return -2;
		}
		strcpy(p3[i],myp2[j]);
	}

	tmp=num1+num2;
	for (i=0;i<tmp;i++)
	{
		for(j=i+1;j<tmp;j++){
			if(strcmp(p3[i],p3[j])>0){
				tmpP=p3[i];
				p3[i]=p3[j];
				p3[j]=tmpP;
			}
		}
	}
	//��Ӹ�ֵ
	*myp3=p3;
	*num3=num1+num2;
	return 0;
}
//////////////////////////////////////////////////////////////////////////
//�ͷ�ָ��
void freeSort01(char **p,int len){
	int i=0;
	if(p==NULL)
	{
		return;
	}
	for (i=0;i<len;i++)
	{
		free(p[i]);
	}
	free(p);
}
//�Ѷ���ָ��ָ��Ķ�ά�ڴ��ͷŵ���ͬʱ����޸���ʵ�ε�ֵ
void freeSort02(char ***myp,int len){
	int i=0;
	char **p=NULL;
	if(myp==NULL)
	{
		return;
	}
	p=*myp;//��ԭ�ɶ���ָ��
	if(p==NULL)
	{
		return;
	}
	for (i=0;i<len;i++)
	{
		free(p[i]);
	}
	free(p);
	//��Ӹ�ֵ��ָ����ڵ��������
	*myp=NULL;
	//myp�Ƕ���ʵ�εĵ�ַ��ֵ
}
//////////////////////////////////////////////////////////////////////////
int main02()
{
	int ret=0;
	int i=0;
	char *p1[]={"aaaaaa","cccc","bbbbb"};
	char buf2[10][30]={"1111111","33333","22222222"};
	char **p3=NULL;
	int len1,len2,len3=0;
	len1=sizeof(p1)/(sizeof(*p1));
	len2=3;
	ret = sort(p1,len1,buf2,len2,&p3,&len3);
	if(ret!=0)
	{
		printf("func sort() error \d",ret);
		return ret;
	}
	for (i=0;i<len3;i++)
	{
		printf("%s \n",p3[i]);
	}
	printf("%s\n","hello,world!");
	system("pause");
	return ret;

}