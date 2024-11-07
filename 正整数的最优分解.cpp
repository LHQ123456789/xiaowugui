#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&n);
	if(n%2==1) printf("-1");
	else
	{
		for(int i=n;i>=2;i=i-2)
		{
			t=i;
			while(t%2==0)
			{
				t=t/2;
			}
			if(t==1)
			{
				printf("%d ",i);
				n=n-i;
				i=n+2;
			}  
		}
		
	}
	return 0;
}