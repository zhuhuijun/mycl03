#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//����һ���ṹ����
//����һ���������� ���������ǹ̶���С�ڴ��ı��� ��û�з����ڴ�
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
//�����Ͷ�������ķ���2//�������͵�ͬʱ�������
 struct Student{
	char name[64];
	int age;
	int id;
}  s1,s2;
 //�����Ͷ�������ķ���3//ֱ�Ӷ������
 struct {
	 char name[64];
	 int age;
	 int id;
 }  s3,s4;
 //�ڶ��ֳ�ʼ���ķ���
 struct Student2{
	 char name[64];
	 int age;
	 int id;
 }  s5={"linqq",34,01};
void main()
{
	//struct Teacher t1;//���߱����������ڴ�
	Teacher t1;
	//��ʼ�������ķ���
	Teacher t2={"zhuhj",23,23};
	t1.age=45;
	strcpy(t1.name,"linqqqq");//t1.�е�.��Ѱַ����
	//����name�൱��t1��ƫ������û�в����ڴ��ַ
	//ͨ��ָ��ķ�ʽ�����ڴ�ռ�
	{
		Teacher *p=NULL;
		p=&t2;
		printf("p=>age:%d\n",p->age);
	}
	printf("t1.name:%s\n",t1.name);
	printf("%s\n","hello,world!");
	system("pause");

}