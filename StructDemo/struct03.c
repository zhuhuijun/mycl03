#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct Teacher{
	int age;
	int id;
} Teacher;
//数组做函数参数会转化为指针
void printArr(Teacher *arr,int num)
{
	int i=0;
	for(i=0;i<num;i++){
		printf("age:%d\n",arr[i].age);
	}
}
void main()
{
	Teacher Array[3];
	int i=0;
	int num=3;
	for(i=0;i<num;i++){
		printf("\n enter your age:");
		scanf("%d",&(Array[i].age));
	}
	for(i=0;i<num;i++){
		printf("age:%d\n",Array[i].age);
	}
	printf("print===============\n");
	printArr(Array,num);//数组首元素代表地址
	printf("%s\n","hello,world!");
	system("pause");

}