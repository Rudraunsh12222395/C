#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	FILE *fp;
	char feedback[100];
	int i;
	fp=fopen("Comments.txt","a");
	if(fp==NULL)
	{
		printf("\nThe file could not be opened");
		exit(1);
	}
	printf("\n Enter data:");
	gets(feedback);
	for(i=0;feedback[i]!='\0';i++)
	{
		fputc(feedback[i],fp);
	}
	fclose(fp);
	return 0;
}
