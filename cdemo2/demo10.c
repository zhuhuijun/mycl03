#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//////////////////////////////////////////////////////////////////////////
//inverse
int inverse (char *str){

	int leng = strlen(str);
	char *p1 = str;
	char *p2 = str+leng-1;
	if(str==NULL){
		return -1;
	}
	while(p1<p2){

		//ppppp
		char c=*p1;
		*p1 = *p2;
		*p2=c;
		++p1;
		--p2;
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////
void mainio()
{
	int k=0;
	char buf[]="abcdef";
	char buf1[]="ghjkl";
	int leng = strlen(buf);
	char *p1 = buf;
	char *p2 = buf+leng-1;
	while(p1<p2){

		//ppppp
		char c=*p1;
		*p1 = *p2;
		*p2=c;
		++p1;
		--p2;
	}
	k=inverse(buf1);
	printf("buf:%s\n",buf1);
	printf("buf:%s\n",buf);
	printf("%s\n","hello,world!");
	system("pause");

}

