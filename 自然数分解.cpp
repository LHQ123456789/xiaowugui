#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		for(int i=n*n-n+1;i<=n*n+n-1;i=i+2)
		{
			printf("%d ",i);
		}
	}
	else
	{
		for(int j=n*n-n+1;j<=n*n+n-1;j=j+2)
		{
			printf("%d ",j);
		}
	}
	printf("\n");
	return 0;
}