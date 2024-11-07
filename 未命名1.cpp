#include<stdio.h>
int main()
{
    int n,pl=0;
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%lld",&a[i]);
    	if(a[i]>=a[pl]) pl=i;
	}
	printf("%d",pl+1);
    return 0;
}