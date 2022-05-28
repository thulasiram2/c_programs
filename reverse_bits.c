#include<stdio.h>
void main()
{
	int n,rev=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rev<<=1;
		if(n&1)
			rev^=1;
		n>>=1;
	}
	printf("%d\n",rev);
}
