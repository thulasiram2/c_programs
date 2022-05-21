#include<stdio.h>
void main()
{
	int n=100;
label:
	printf("%d\t",n);
	n--;
	if(n>0)
	{
		goto label;
	}
}
