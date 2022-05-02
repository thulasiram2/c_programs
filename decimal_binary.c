                /* wacp  to covert decimal to binary using recursions */
#include<stdio.h>
int binary(int);
void main()
{
	int m;
	printf("enter the integer value\n");
	scanf("%d",&m);
	binary(m);
	printf("\n");
}
int binary(int m)
{
	int rem;
	if(m==0)
		return 0;
	else
	{
		rem=m%2;
		binary(m/2);
		printf("%d",rem);
	}
	//printf("%d",rem);
}
