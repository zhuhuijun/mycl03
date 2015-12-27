#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////第三种内存模型
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
		sprintf(p2[i],"%d%d%d",i+1,i+1,i+1);//写内存的首地址
	}
	//打印
	for(i=0;i<num;i++){
		printf("%s\n",p2[i]);
	}
	//排序//交换的是指针的指向
	//for(i=0;i<num;i++){
	//	for(j=i+1;j<num;j++){
	//		if(strcmp(p2[j],p2[i])>0){
	//			tmp=p2[i];
	//			p2[i]=p2[j];//交换的是指针
	//			p2[j]=tmp;
	//		}
	//	}
	//}
	//交换的是内存的值
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
	//打印
	for(i=0;i<num;i++){
		printf("%s\n",p2[i]);
	}
	//释放
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
//分配内存的函数
char **GetMem(int num){
	int i=0;
	char **p2=NULL;
	p2=(char **)malloc(sizeof(char *)*num);
	if(p2==NULL){
		return NULL;
	}
	for( i=0;i<num;i++){
		p2[i]=(char *)malloc(sizeof(char)*100);//char buf[100]
		sprintf(p2[i],"%d%d%d",i+1,i+1,i+1);//写内存的首地址
	}
	return p2;
}
//打印
void printMyArr03(char **myArr,int num){//传的是内存的首地址
	int i=0;
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
}
//排序
void sortMyArr03(char **myArr,int num){
	int i=0;
	int j=0;
	char *tmp=NULL;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])<0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//交换的是数组元素，交换的是指针的值
				myArr[j]=tmp;
			}
		}
	}
}
//释放内存空间
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
	//打印
	printMyArr03(p2,num);
	//排序//交换的是指针的指向
	//for(i=0;i<num;i++){
	//	for(j=i+1;j<num;j++){
	//		if(strcmp(p2[j],p2[i])>0){
	//			tmp=p2[i];
	//			p2[i]=p2[j];//交换的是指针
	//			p2[j]=tmp;
	//		}
	//	}
	//}
	//交换的是内存的值
	sortMyArr03(p2,num);
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	//打印
	printMyArr03(p2,num);
	//释放
	mem_free(p2,num);
	printf("%s\n","hello,world!");
	system("pause");

}