#include<stdio.h>
void main()
{
	int a[5]={11,22,33,44,55};
	int i,*p[5]={a,a+1,a+2,a+3,a+4};
	for(i=0;i<5;i++)
	{
		printf("the address of a is %p\n",p[i]);
		printf("the address is %d\n",*p[i]);
	}

}
