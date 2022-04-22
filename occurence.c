#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char s[10];
	printf("enter the string\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='i')
			count++;
	}
	printf("the number of i is %d\n",count);
}
