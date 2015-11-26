#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////两头堵模型
int trimSpaceoo(char *str,char *newstr){
	int i=0;
	int j=0;
	int nocount=0;
	char *p=str;
	if(str==NULL||newstr==NULL){
		return -1;
	}
	j=strlen(p)-1;//以\0结尾
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
////////////////////////////////////////////////////////////////////////////关于key=value的键值对的方法
int getKeyByValue(char *kayvaluebuf,char *keybuf,char *valuebuf){
	//1查找子串是否在母串中
	char *p=NULL;
	int ret=0;
	if(kayvaluebuf==NULL||keybuf==NULL||valuebuf==NULL){
		return -1;
	}
	p=kayvaluebuf;//初始化辅助指针的变量
	p = strstr(p,keybuf);
	if(p==NULL){
		return -1;
	}
	p = p+strlen(keybuf);
	//辅助指针重新初始化

	//2看有没有等号
	p = strstr(p,"=");
	if(p==NULL){
		return -1;
	}
	p =p+strlen("=");
	//3等号后面去掉空格
	ret = trimSpaceoo(p,valuebuf);
	if(ret!=0){
		printf("trimSpace is err");
		return ret;
	}
	return ret;
}
//////////////////////////////////////////////////////////////////////////主函数的调用
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