#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////
//�ṹ����ʦ
typedef struct Teacher{
	char name[64];
	int age;
	char *pname2;

} Teacher;
//��������=�Ų���ֻ�Ὣָ�������ֵ��from copy to 
//�����ָ����ڴ�ռ�copy
//���ֵ�����ṹ������һ�����߶���ָ��
//����ǳcopy
void copyTeacher(Teacher *from,Teacher *to){
	*to=*from;
	//��copy��Ҫ��ʽ�ķ����ڴ�
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
	//t1���Ƹ�t2
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