#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void mainbkjl()
{
	int a[]={1,2};//��ʽָ������
	int b[10]={1,2};//��ʾָ������
	int c[100]={0};//��ʼ��Ϊ0//�����������ʱ��Ϊ0//����ĳ�ʼ���ٶȿ�
	memset(c,0,sizeof(c));//��ʼ��//��ʾ�������ڴ��
	//����һά����C�Ĺ涨
	//c��������Ԫ�صĵ�ַ//c+1 ���� int 4
	//&c����������ĵ�ַ//&c+1   100*4 400
	//������Ԫ�صĵ�ַ������ĵ�ֵַ���
	//�̶���С�ڴ��ı���
	printf("%d\n",c);
	printf("%d\n",&c);
	printf("%s\n","hello,world!");
	system("pause");

}
//�������int a[10]������������
//���ͱ�ְ:�̶���С�ڴ��ı���
//������������
void mainjfaljgalg(){
	int i=0;
	typedef int (MyArrayType)[10];//����������������������������
	MyArrayType myarr;//int myarr[5];
	for (i=0;i<5;i++)
	{
		myarr[i]=i+1;
	}
	for (i=0;i<5;i++)
	{
		printf("%d\n",myarr[i]);
	}
	printf("myarr����������Ԫ�ص�ַ:%d\n",myarr);
	printf("myarr+1����Ϊ4:%d\n",myarr+1);
	printf("&myarr���������ַ:%d\n",&myarr);
	printf("&myarr+1����Ϊ20:%d\n",&myarr+1);
	printf("%s\n","hello,world!");
	system("pause");
}