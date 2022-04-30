#include<stdio.h>
void clear_bit(int *,int);
void main()
{
	int a,pos;
	printf("enter the any integer value\n");
	scanf("%d",&a);
	printf("enter the position \n");
	scanf("%d",&pos);
	printf("before clearing a bit a=%d\n",a);
	clear_bit(&a,pos);
	printf("after clearing a bit a=%d\n",a);
}
void clear_bit(int *p,int q)
{
	*p=*p&(~(1<<q));
}
