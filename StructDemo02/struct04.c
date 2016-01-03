#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//结构体老师
//一旦机构体定义下来，其内存布局就已经确定
//可以通过age的地址获得结构体的地址
typedef struct AdvTeacher{
	char name[64];//64
	int age;//4
	int p;//4
	char *pname2;

} AdvTeacher;
void main()
{
	AdvTeacher t1;
	AdvTeacher *p1=NULL;
	//
	p1=&t1;
	p1-1;//编译通过//运行通过//cpu中运行的没有操作内存
	{
		int off=(int)&(p1->age);//结构体中元素的相对偏移量
		int offsize=(int)&(((AdvTeacher *)0)->age);
		printf("%d \n",off);//相当于大的结构体的偏移量是64
		printf("%d \n",offsize);
	}
	printf("%s\n","hello,world!");
	system("pause");

}