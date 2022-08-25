#include<stdio.h>
void main()
{
	int p;
	char q[50],cnt=1;
	printf("Enter string \n");
	gets(q);
	for(p=0;q[p]!='\0';p++)
	{
		if(q[p]==' ')
		cnt+=1;
	}
	
	printf("Number of words: %d",cnt);
	
}