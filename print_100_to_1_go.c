#include<stdio.h>
void main()
{
	int n=1;
label:
	printf("%d\t",n);
	n++;
	if(n<=100)
	{
		goto label;
	}
}
