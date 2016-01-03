#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//结构体老师
typedef struct Teacher{
	char name[64];
	int age;
	char *pname2;

} Teacher;
//编译器的=号操作只会将指针变量的值从from copy to 
//不会把指针的内存空间copy
//出现的情况结构体中有一级或者二级指针
//这是浅copy
void copyTeacher(Teacher *from,Teacher *to){
	*to=*from;
	//深copy需要显式的分配内存
	to->pname2=(char *)malloc(100);
	strcpy(to->pname2,from->pname2);
	//memcpy(to,from,sizeof(Teacher));
}
//////////////////////////////////////////////////////////////////////////
//main 
void main03()
{
	Teacher t1;
	Teacher t2;
	strcpy(t1.name,"name1");
	t1.pname2=(char *)malloc(100);
	strcpy(t1.pname2,"pname2");
	//t1复制给t2
	copyTeacher(&t1,&t2);
	if(t1.pname2!=NULL)
	{
		free(t1.pname2);
		t1.pname2=NULL;
	}
	if(t2.pname2!=NULL)
	{
		free(t2.pname2);
		t2.pname2=NULL;
	}
	printf("%s\n","hello,world!");
	system("pause");

}