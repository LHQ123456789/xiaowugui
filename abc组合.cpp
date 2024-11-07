#include<stdio.h>
int main()
{
	int n,a,b,c,t;
	scanf("%d",&n);
	for(int i=100;i<1000;i++)
	{
		t=i;
		a=t%10;
		t=t/10;
		b=t%10;
		t=t/10;
		c=t%10;
		if(n==a*101+b*20+c*101) printf("%d %d %d\n",c,b,a);
	}
	return 0;
}