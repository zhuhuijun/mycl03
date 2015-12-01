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
	//数组 鼠族中的每一个元素是指针 指针数组
	//第一种内存模型
	char *myArr[]={"aaaaaa","bbbbbbb","cccccccc","2222222222222"};
	num=sizeof(myArr)/sizeof(myArr[0]);
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
	//排序
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//交换的是数组元素，交换的是指针的值
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
//打印
void printMyArr(char **myArr,int num){//传的是内存的首地址
	int i=0;
	for(i=0;i<num;i++){
		printf("%s\n",myArr[i]);
	}
}
//排序
void sortMyArr(char **myArr,int num){
	int i=0;
	int j=0;
	char *tmp=NULL;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(strcmp(myArr[i],myArr[j])>0){
				tmp=myArr[i];
				myArr[i]=myArr[j];//交换的是数组元素，交换的是指针的值
				myArr[j]=tmp;
			}
		}
	}
}
//////////////////////////////////////////////////////////////////////////第一种内存模型
void mainiooo()
{
	int i=0;
	int j=0;
	int num=0;
	char *tmp=NULL;
	//数组 鼠族中的每一个元素是指针 指针数组
	//第一种内存模型
	char *myArr[]={"aaaaaa","bbbbbbb","cccccccc","2222222222222"};
	num=sizeof(myArr)/sizeof(myArr[0]);
	printMyArr(myArr,num);
	//排序
	sortMyArr(myArr,num);
	printf("%s\n","=============================================");
	printMyArr(myArr,num);
	printf("%s\n","hello,world!");
	system("pause");

}