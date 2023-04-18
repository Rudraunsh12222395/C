#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[80];
	int i,ch;
	fp=fopen("student1.txt","r");
	if(fp==NULL)
	{
		printf("\n The file could not be opened");
		exit(1);
	}
	ch=fgetc(fp);
	for(i=0;(i<79)&&(feof(fp)==0);i++)//while(ch!=EOF)
	{
		str[i]=(char)ch;
		ch=fgetc(fp);
	}
	str[i]='\0';
	printf("\n%s",str);
	fclose(fp);
}
