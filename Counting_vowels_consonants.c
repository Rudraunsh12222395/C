#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	
	
	
	FILE *fp;
	char ch;
	int count=0,total=0;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("\n File can not open");
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')//For checking the range:A-Z and a-z(For avoiding special characters)
		{
	    	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	    	{
	    		count++;//For counting vowels
			}
			else
			{
				total++;//For counting consonants
			}
		}
		ch=fgetc(fp);
	}
	printf("\n Number of vowel :%d",count);
	printf("\n Number of consonent :%d",total);
	fclose(fp);
}

