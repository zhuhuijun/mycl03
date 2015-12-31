#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//����ָ��������
typedef struct Teacher{
	int age;
	int id;
} Teacher;
//////////////////////////////////////////////////////////////////////////
//�����ڴ�
Teacher * createTeacher06(int num)
{

	Teacher * tmp=NULL;
	tmp=(Teacher *)malloc(sizeof(Teacher)*num);
	if(tmp==NULL)
	{
		return NULL;
	}
	return tmp;
}
//����ָ������
int createTeacher006(Teacher ** p,int num)
{
	Teacher * tmp=NULL;
	int ret=0;
	tmp=(Teacher *)malloc(sizeof(Teacher)*num);
	if(tmp==NULL)
	{
		return -1;
	}
	*p= tmp;
	return ret;
}
//����
void sortArr06(Teacher *arr,int num)
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
//����������������ת��Ϊָ��
void printArr06(Teacher *arr,int num)
{
	int i=0;
	for(i=0;i<num;i++){
		printf("age:%d\n",arr[i].age);
	}
}
//�ͷ�
void FreeTeacher06(Teacher * p)
{
	if(p!=NULL)
	{
		free(p);
	}

}
void main06()
{
	int i=0;
	int num=3;
	int ret=0;
	Teacher *pArray=NULL;
	//pArray=createTeacher06(num);
	ret = createTeacher006(&pArray,num);
	for(i=0;i<num;i++){
		printf("\n enter your age:");
		scanf("%d",&(pArray[i].age));
	}
	printArr06(pArray,num);
	sortArr06(pArray,num);
	printf("=========================sort after=============\n");
	printArr06(pArray,num);
	//�ͷ��ڴ�ռ�
	FreeTeacher06(pArray);
	printf("%s\n","hello,world!");
	system("pause");

}