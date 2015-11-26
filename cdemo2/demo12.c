#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////��ͷ��ģ��
int trimSpaceoo(char *str,char *newstr){
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
////////////////////////////////////////////////////////////////////////////����key=value�ļ�ֵ�Եķ���
int getKeyByValue(char *kayvaluebuf,char *keybuf,char *valuebuf){
	//1�����Ӵ��Ƿ���ĸ����
	char *p=NULL;
	int ret=0;
	if(kayvaluebuf==NULL||keybuf==NULL||valuebuf==NULL){
		return -1;
	}
	p=kayvaluebuf;//��ʼ������ָ��ı���
	p = strstr(p,keybuf);
	if(p==NULL){
		return -1;
	}
	p = p+strlen(keybuf);
	//����ָ�����³�ʼ��

	//2����û�еȺ�
	p = strstr(p,"=");
	if(p==NULL){
		return -1;
	}
	p =p+strlen("=");
	//3�Ⱥź���ȥ���ո�
	ret = trimSpaceoo(p,valuebuf);
	if(ret!=0){
		printf("trimSpace is err");
		return ret;
	}
	return ret;
}
//////////////////////////////////////////////////////////////////////////�������ĵ���
int  main()
{
	int ret=0;
	char buf[1024]={0};
	int buflen=0;
	char *keyandvalue="key2=             value2";
	char *key="key2";
	ret = getKeyByValue(keyandvalue,key,buf,&buflen);
	printf("buf:%s\n",buf);
	if(ret!=0){
		printf("func error getKeyByValue,err:%d \n",ret);
		return ret;
	}
	printf("%s\n",buf);
	printf("%s\n","hello,world!");
	system("pause");
	return ret;
}