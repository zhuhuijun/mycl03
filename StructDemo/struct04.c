#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct Teacher{
	int age;
	int id;
} Teacher;
//////////////////////////////////////////////////////////////////////////
//分配内存
Teacher * createTeacher(int num)
{

	Teacher * tmp=NULL;
	tmp=(Teacher *)malloc(sizeof(Teacher)*num);
	if(tmp==NULL)
	{
		return NULL;
	}
	return tmp;
}
//排序
void sortArr01(Teacher *arr,int num)
{
	int i=0;
	int j=0;
	Teacher tmp;
	for (i=0;i<num;i++)
	{
		for (j=i+1;j<num;j++)
		{
			if(arr[i].age>arr[j].age){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}
//数组做函数参数会转化为指针
void printArr1(Teacher *arr,int num)
{
	int i=0;
	for(i=0;i<num;i++){
		printf("age:%d\n",arr[i].age);
	}
}
//释放
void FreeTeacher(Teacher * p)
{
	if(p!=NULL)
	{
		free(p);
	}

}
void main004()
{
	int i=0;
	int num=3;
	Teacher *pArray=NULL;
	pArray=createTeacher(num);
	for(i=0;i<num;i++){
		printf("\n enter your age:");
		scanf("%d",&(pArray[i].age));
	}
	printArr1(pArray,num);
	sortArr01(pArray,num);
	printf("=========================sort after=============\n");
	printArr1(pArray,num);
	//释放内存空间
	FreeTeacher(pArray);
	printf("%s\n","hello,world!");
	system("pause");

}