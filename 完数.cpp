#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum=1;
    scanf("%d %d",&a,&b);
    if(a==1) a=a+1;
    for(int i=a;i<=b;i++)
    {
    	for(int j=2;j<i;j++)
    		if(i%j==0) sum=sum+j;
    	if(sum==i) printf("%d\n",i);
    	sum=1;
	}

	return 0;
}