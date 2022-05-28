#include<stdio.h>
void inc(int);
void main()
{
	int n=100;
	inc(n);
	printf("\n");
}
void inc(int a)
{
	if(a<1);
	else
	{
	printf("%d\t",a);
	a--;
	inc(a);
	}
}
