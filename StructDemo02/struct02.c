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
	p3=(char **)malloc((num1+num2)*sizeof(char *));//里面装的是指针
	if(p3==NULL)
	{
		return -1;
	}
	//根据字符串的长度分配内存
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
	//间接赋值
	*myp3=p3;
	*num3=num1+num2;
	return 0;
}
//////////////////////////////////////////////////////////////////////////
//释放指针
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
//把二级指针指向的二维内存释放掉，同时间接修改了实参的值
void freeSort02(char ***myp,int len){
	int i=0;
	char **p=NULL;
	if(myp==NULL)
	{
		return;
	}
	p=*myp;//还原成二级指针
	if(p==NULL)
	{
		return;
	}
	for (i=0;i<len;i++)
	{
		free(p[i]);
	}
	free(p);
	//间接赋值是指针存在的最大意义
	*myp=NULL;
	//myp是二级实参的地址的值
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