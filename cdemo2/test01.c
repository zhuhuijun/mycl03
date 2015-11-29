#define CTR_SECURE_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//改变指针的值通过指针
void change(int *p){
	printf("p:%d\n",p);
	*p=12;
	return;
}
//////////////////////////////////////////////////////////////////////////
//二级指针
int mem_init(int **p)
{
	*p=malloc(100);
	return 0;
}
//释放内存空间
void freemem(int **p){
	if(*p==NULL)
	{
		return;
	}
	free(*p);
	*p=NULL;
}
//////////////////////////////////////////////////////////////////////////
void main()
{
	int tmp=0;
	int *buf;
	int ren=0;

	change(&tmp);
	printf("tmp:%d\n",tmp);
	printf("Hello,world!\n");

	{
		printf("tmp:%d\n",ren);
		ren=mem_init(&buf);//为指针分配内存地址
		printf("buf:%d\n",&tmp);
		*buf=123;
		printf("buf:%d\n",*buf);
	}
	freemem(&buf);
	system("pause");
}