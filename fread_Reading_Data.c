#include<stdio.h>
int main()
{
	
	
	
	FILE *fp;
	char str[9];
	fp=fopen("student1.txt","r");
	if(fp==NULL)
	{
		printf("\n The file could not be opened");
	}
	fread(str,1,8,fp);//void *,size,count,file pointer
	str[8]='\0';
	printf("\n First 9 chracters of the file are:%s",str);
	fclose(fp);
	return 0;
}
