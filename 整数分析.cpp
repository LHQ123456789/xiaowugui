#include<stdio.h>
int main()
{
	long n,i,max=0,min=10;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		if(max<=(n%10)) max=n%10;
		if(min>=(n%10)) min=n%10;
		n=n/10;
		if(n==0) break;
	}
	printf("%d %d %d",i,max,min);
	return 0;
}