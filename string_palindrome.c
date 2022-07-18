#include<stdio.h>
#include<string.h>
void main()
{
        char c[20];
        int i,l,temp,m=0;
        printf("enter the string\n");
        scanf("%[^\n]",c);
        l=strlen(c);
        for(i=0;i<l/2;i++)
        {
        	if(c[i]!=c[l-1-i])
		{
			m++;
			break;
		}
        }
	if(m==0)
		printf("palindrme\n");
	else
		printf("not palindrome\n");
}

