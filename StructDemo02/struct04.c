#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//�ṹ����ʦ
//һ�������嶨�����������ڴ沼�־��Ѿ�ȷ��
//����ͨ��age�ĵ�ַ��ýṹ��ĵ�ַ
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
	p1-1;//����ͨ��//����ͨ��//cpu�����е�û�в����ڴ�
	{
		int off=(int)&(p1->age);//�ṹ����Ԫ�ص����ƫ����
		int offsize=(int)&(((AdvTeacher *)0)->age);
		printf("%d \n",off);//�൱�ڴ�Ľṹ���ƫ������64
		printf("%d \n",offsize);
	}
	printf("%s\n","hello,world!");
	system("pause");

}