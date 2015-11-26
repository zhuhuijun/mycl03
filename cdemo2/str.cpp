#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// char *p="abcdhfshabcd23333abcdyryurabcdururu";
// 求abcd出现的次数
// 自定义函数和main函数分开
int getCount(char *mystr,char *sub,int *mycount){
	int tmpcount=0;
	int ret=0;
	if(mystr==NULL||sub==NULL||mycount==NULL){
		ret=-1;
		printf("func getCount() err:%d  mystr==NULL||sub==NULL||mycount==NULL\n",ret);
	}else{
		char *p=mystr;//为了不改变形参的值
		do{
			p=strstr(p,sub);
			if(p!=NULL){
				tmpcount++;
				p=p+strlen(sub);
			}else{
				break;
			}
		}while(*p!='\0');
		*mycount=tmpcount;// 间接赋值是指针存在的最大意义
	}
	return ret;
}
int main34(){
	char *mystr="abcdhfshabcd23333abcdyryurabcdururu";
	char sub[]="abcd";
	int count=0;
	int ret=0;
	ret = getCount(mystr,NULL,&count);
	if(ret!=0){
		printf("func error %d\n",ret);
	}
	printf("nocount:%d\n",count);
	printf("hello....\n");
	system("pause");
	return;
}
void mainee(){
	int nocount=0;
	int nocount2=0;
	int nocount3=0;
	char *p="abcdhfshabcd23333abcdyryurabcdururu";
	do{
		p=strstr(p,"abcd");
		if(p!=NULL){
			nocount++;
			p=p+strlen("abcd");
		}else{
			break;
		}
	}while(*p!='\0');
	{
		char *p1="abcdhfshabcd23333abcdyryurabcdururu";
		while(p1!='\0'){
			p1=strstr(p1,"abc");
			if(p1!=NULL){
				nocount2++;
				p1=p1+strlen("abc");
			}else{
				break;
			}

		}
		printf("nocount2:%d\n",nocount2);
	}
	{
		char *p2="abcdhfshabcd23333abcdyryurabcdururu";
		while(p2=strstr(p2,"ab")){
			nocount3++;
			p2=p2+strlen("ab");
			if(*p2=='\0'){
				break;
			}
		}
		printf("nocount3:%d\n",nocount3);
	}
	printf("nocount:%d\n",nocount);
	printf("hello....\n");
	system("pause");
	return;

}