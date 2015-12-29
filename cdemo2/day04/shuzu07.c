#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//宏定义
#define  DIM(a)(sizeof(a)/sizeof(*a))
//字符查找的方法
//int searchKeyTable(const char** table, const int size,const char* key,int *pos){
int searchKeyTable(const char* table[], const int size,const char* key,int *pos){
	int rv=0;
	int i=0;
	int inum=0;
	if(table==NULL||key==NULL||pos==NULL)
	{
		rv=-1;
		printf("func searchKeyTable error:%d",rv);
		return rv;
	}
	//证明多维数组做参数退化为指针
	inum=(sizeof(table)/sizeof(*table));
	for(i=0;i<size;i++)
	{
		if(strcmp(key,table[i])==0){
			*pos=i;
			return rv;
		}
	}
	if(i==size)
	{
		*pos=-1;
	}
	return rv;
}
//////////////////////////////////////////////////////////////////////////
//主函数
void mainnnnn()
{
	int inum=0;
	int pos=0;
	int a[10];
	int i=0;
	//指针数组
	char* ckeyword[]={"while","do","case","static"};
	searchKeyTable(ckeyword,DIM(ckeyword),"case",&pos);
	printf("pos:%d\n",pos);

	printf("%s\n","hello,world!");
	system("pause");

}