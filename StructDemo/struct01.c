#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//定义一个结构类型
//定义一个数据类型 数据类型是固定大小内存块的别名 还没有分配内存
//struct Teacher{
//	char name[64];
//	int age;
//	int id;
//};
typedef struct Teacher{
	char name[64];
	int age;
	int id;
} Teacher;
//用类型定义变量的方法2//定义类型的同时定义变量
 struct Student{
	char name[64];
	int age;
	int id;
}  s1,s2;
 //用类型定义变量的方法3//直接定义变量
 struct {
	 char name[64];
	 int age;
	 int id;
 }  s3,s4;
void main()
{
	//struct Teacher t1;//告诉编译器分配内存
	Teacher t1;
	printf("%s\n","hello,world!");
	system("pause");

}