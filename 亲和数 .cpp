#include<stdio.h>
int main()
{
	int n,m,num1=1,num2=1,sum1=1,sum2=1;
	scanf("%d %d",&n,&m);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0) 
		{
			sum1+=i;
			num1++;
		}
	}
	for(int j=2;j<=m/2;j++)
	{
		if(m%j==0)
		{
			sum2+=j;
			num2++;
		}
	}
	if(sum1==m&&sum2==n) printf("yes %d %d",num1,num2);
	else printf("no %d %d",num1,num2);
	return 0;
}