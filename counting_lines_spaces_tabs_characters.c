#include<stdio.h>
int main()
{
	
	
	FILE *fp;
	char ch;
	int nol=1,not=0,nob=0,noc=0;
	fp=fopen("Blanks_Spaces_Characters_Tabs.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		noc++;
		
		if(ch==' ')
		{
			nob++;
		}
		else if(ch=='\n')
		{
			nol++;
		}
		else if(ch=='\t')
		{
			not++;
		}
		ch=fgetc(fp);
	}
	fclose(fp);
	printf("\n Number of characters=%d",noc);
	printf("\n Number of blanks=%d",nob);
	printf("\n Number of tabs=%d",not);
	printf("\n Number of lines=%d",nol);
	return 0;
}
