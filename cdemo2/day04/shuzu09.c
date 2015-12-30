#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main()
{
	int i=0;
	//Ö¸ÕëÊý×é
	char* ckeyword[]={"while","do","case","static",'\0'};
	char* ckeyword1[]={"while","do","case","static",0};
	char* ckeyword2[]={"while","do","case","static",NULL};
	for(i=0;ckeyword[i]!='\0';i++)
	{
		printf("%s\n",ckeyword[i]);
	}
	{
		printf("\n.............\n");
		for(i=0;ckeyword1[i]!=NULL;i++)
		{
			printf("%s\n",ckeyword1[i]);
		}
	}
	{
		printf("\n.............\n");
		for(i=0;ckeyword2[i]!=NULL;i++)
		{
			printf("%s\n",ckeyword2[i]);
		}
	}

	printf("%s\n","hello,world!");
	system("pause");

}