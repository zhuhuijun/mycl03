#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
////////////////////////////////////////////////////////////////////////////二级指针做输入和输出的模型
//求文件中的两段话的长度
int getMem(char **myp1,int *mylen1,char **myp2,int *mylen2){
	char *tmp1=NULL;
	char *tmp2=NULL;
	tmp1=(char *)malloc(1024);
	tmp2=(char *)malloc(1024);

	//
	if(tmp1==NULL){
		return -1;	
	}
	strcpy(tmp1,"abcdefg");
	*mylen1=strlen(tmp1);
	*myp1=tmp1;//间接修改实参p1的值

	//
	if(tmp2==NULL){
		return -2;	
	}
	strcpy(tmp2,"hijklmn");
	*mylen2=strlen(tmp2);
	*myp2=tmp2;

	return 0;
}
//释放指针
void getMem_Free(char **myp1){
	
	if(myp1==NULL){
		return ;
	}
	free(*myp1);//释放完指针变量所指向的内存空间

	*myp1=NULL;//把实参修改成NULL
	
	/*char *tmp=NULL;
	if(myp1==NULL){
		return ;
	}
	tmp=myp1;
	free(tmp);//释放完指针变量所指向的内存空间

	*myp1=NULL;//把实参修改成NULL
	*/
}
////////////////////////////////////////////////////////////////////////////main函数
void mainkl()
{
	char *p1=NULL;
	int len1=0;
	int ret=0;

	char *p2=NULL;
	int len2=0;

	char *p3="abcdefg";
	ret = getMem(&p1,&len1,&p2,&len2);

	printf("p1:%s \n",p1);
	printf("p2:%s \n",p2);
	getMem_Free(&p1);
	getMem_Free(&p2);
	//printf("p3:%s \n",p3);

	printf("%s\n","hello,world!");
	system("pause");

}