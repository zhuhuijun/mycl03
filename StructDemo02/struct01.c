#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct Teacher
{
	char name[64];
	char *alisname;
	char **stuname;//ѧ��������
	int age ;
	int id;
}Teacher;

void printTeacher(Teacher *array, int num)
{
	int i = 0;

	for (i=0; i<num; i++)
	{
		printf("age:%d \n", array[i].age);
	}
}

void sortTeacer(Teacher *array, int num)
{
	int		i,j;
	Teacher tmp;

	for (i=0; i<num; i++)
	{
		for (j=i+1; j<num; j++)
		{
			if (array[i].age > array[j].age)
			{
				tmp = array[i];  //=�Ų���  ��ֵ����
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

Teacher * createTeacher01(int num)
{
	Teacher * tmp = NULL;
	tmp = (Teacher *)malloc(sizeof(Teacher) * num); //	Teacher		Array[3]
	if (tmp == NULL)
	{
		return NULL;
	}
	return tmp; //

}

int createTeacher02(Teacher **pT, int num)
{
	int i = 0;
	int j=0;
	Teacher * tmp = NULL;
	tmp = (Teacher *)malloc(sizeof(Teacher) * num); //	Teacher		Array[3]
	if (tmp == NULL)
	{
		return -1;
	}
	memset(tmp, 0, sizeof(Teacher) * num);

	for (i=0; i<num; i++)
	{
		//mallocһ��ָ��
		tmp[i].alisname = (char *)malloc(60);
		//�Լ������ά�ڴ�ռ�
		{
			char **p=(char **)malloc(3*sizeof(char *));
			for (j=0;j<3;j++)
			{
				p[j]=(char *)malloc(130);
			}
			tmp[i].stuname=p;
		}
	}

	*pT = tmp;  //����ָ�� �β� ȥ��ӵ��޸� ʵ�� ��ֵ 
	return 0; //
}

void FreeTeacher05(Teacher *p, int num)
{
	int	i = 0;
	int j=0;
	if (p == NULL)
	{
		return;
	}
	for (i=0; i<num; i++)
	{
		if (p[i].alisname != NULL)
		{
			free(p[i].alisname);
		}
		//�ͷŶ���ָ��
		if(p[i].stuname!=NULL)
		{
			char **myp=p[i].stuname;
			for (j=0;j<3;j++)
			{
				if(myp[j]!=NULL)
				{
					free(myp[j]);
				}
			}
			free(myp);
			p[i].stuname=NULL;
		}
	}
	free(p);
}

void main01()
{
	int			ret = 0;
	int			i = 0;
	int j=0;
	//Teacher		Array[3];  //��stack �����ڴ�
	int			num = 3;
	Teacher *pArray = NULL;
	ret = createTeacher02(&pArray, num);
	if (ret != 0)
	{
		printf("func createTeacher02() er:%d \n ", ret);
		return ;
	}


	for (i=0; i<num; i++)
	{
		printf("\nplease enter age:");
		scanf("%d", & (pArray[i].age) );

		//printf("\nplease enter name:");
		//scanf("%s",  pArray[i].name ); //��ָ����ָ���ڴ�ռ�copy����

		printf("\nplease enter alias:");
		scanf("%s",  pArray[i].alisname );  //��ָ����ָ���ڴ�ռ�copy����

		for (j=0;j<3;j++)
		{
			printf("\nplease enter atudentlias:");
			scanf("%s",  pArray[i].stuname[j] ); 
		}
	}

	//��ӡ��ʦ����
	// 	for (i=0; i<num; i++)
	// 	{
	// 		printf("age:%d \n", Array[i].age);
	// 	}

	printTeacher(pArray, num);

	sortTeacer(pArray, num);

	printf("����֮��\n");

	printTeacher(pArray, num);

	FreeTeacher05(pArray, num);

	printf("hello...\n");
	system("pause");
	return ;
}