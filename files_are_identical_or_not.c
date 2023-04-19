#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*gp;
	char c1,c2;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("\n File can not open");
		exit(1);
	}
	gp=fopen("pqr.txt","r");
	if(gp==NULL)
	{
		printf("\n File can not open");
		exit(1);
	}
	c1=fgetc(fp);
	c2=fgetc(gp);
	while(c1!=EOF && c2!=EOF && c1==c2)
	{
    	c1=fgetc(fp);
	    c2=fgetc(gp);	
	}
	if(c1==c2)
	{
		printf("\n Files are identical");
	}
	else
	{
		printf("\n Files are not identical");
	}
	fclose(fp);
	fclose(gp);
}

