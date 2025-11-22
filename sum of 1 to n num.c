// sum of 1 to n numbers
#include<stdio.h>
int sum_n(int);
main()
{
	int i,n,sum;
	printf("enter n value");
	scanf("%d",&n);
	sum= sum_n(n);
	printf("the sum is %d",sum);
}
int sum_n(int x)
{
	int i,s=0;
	for(i=1;i<=x;i++)
	{
		s=s+i;
	}
	return s;
}
