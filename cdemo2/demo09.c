#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////��ͷ��ģ��

int getCount02(char *str,int *pcount){
	int i=0;
	int j=0;
	int nocount=0;
	char *p=str;
	if(str==NULL||pcount==NULL){
		return -1;
	}
	j=strlen(p)-1;//��\0��β
	while(isspace(p[i])&&p[i]!='\0'){
		i++;
	}
	while(isspace(p[j])&&p[j]!='\0'){
		j--;
	}
	*pcount =j-i+1;
	return 0;
}
//////////////////////////////////////////////////////////////////////////��ǿո��ַ����ĳ���
int trimSpace(char *str,char *newstr){
	int i=0;
	int j=0;
	int nocount=0;
	char *p=str;
	if(str==NULL||newstr==NULL){
		return -1;
	}
	j=strlen(p)-1;//��\0��β
	while(isspace(p[i])&&p[i]!='\0'){
		i++;
	}
	while(isspace(p[j])&&p[j]!='\0'){
		j--;
	}
	nocount =j-i+1;
	strncpy(newstr,str+i,nocount);
	newstr[nocount]='\0';
	return 0;
}
//str���ڴ�ռ��ǿ��Ա��޸ĵ�
int trimSpace02(char *str){
	int i=0;
	int j=0;
	int nocount=0;
	char *p=str;
	if(str==NULL){
		return -1;
	}
	j=strlen(p)-1;//��\0��β
	while(isspace(p[i])&&p[i]!='\0'){
		i++;
	}
	while(isspace(p[j])&&p[j]!='\0'){
		j--;
	}
	nocount =j-i+1;
	strncpy(str,str+i,nocount);
	str[nocount]='\0';
	return 0;
}
//////////////////////////////////////////////////////////////////////////ȥ�ַ���ǰ��Ŀո񣬿ո������
void mainty(){
	//��ǿո�ĳ���
	char *p="            abcde              ";
	int i=0;
	int j=0;
	int nocount=0;
	j=strlen(p)-1;//��\0��β
	while(isspace(p[i])&&p[i]!='\0'){
		i++;
	}
	while(isspace(p[j])&&p[j]!='\0'){
		j--;
	}
	nocount =j-i+1;
	printf("nocount:%d\n",nocount);
	printf("hello: \n");
	system("pause");
	return ;
}
//////////////////////////////////////////////////////////////////////////
void main89(){
	//��ǿո�ĳ���
	char *p="            abcde              ";
	char buf1[1024] ="            abcde              ";
	char buf[103]={0};
	int nocount=0;
	getCount02(p,&nocount);

	trimSpace(p,buf);
	trimSpace02(buf1);
	printf("buf1:%s\n",buf1);
	printf("newstr:%s\n",buf);
	printf("nocount:%d\n",nocount);
	printf("hello: \n");
	system("pause");
	return ;
}