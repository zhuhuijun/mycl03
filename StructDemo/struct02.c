#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
typedef struct Teacher{
	char name[64];
	int age;
	int id;
} Teacher;
//////////////////////////////////////////////////////////////////////////
//这是不行的
void copymethod(Teacher from,Teacher to)
{
	to=from;
}
//可以
void copymethod1(Teacher *from,Teacher *to)
{
	*to=*from;
}
void main02()
{
	Teacher t1={"zhuhj",45,34};
	Teacher t3;
	memset(&t3,0,sizeof(t3));
	copymethod(t1,t3);
	printf("t3.name:%s\n",t3.name);
	printf("after\n",t3.name);
	//可以
	copymethod1(&t1,&t3);
	printf("t3.name:%s\n",t3.name);
	printf("%s\n","hello,world!");
	system("pause");

}