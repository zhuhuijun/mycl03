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
void main()
{
	//struct Teacher t1;//���߱����������ڴ�
	Teacher t1;
	printf("%s\n","hello,world!");
	system("pause");

}