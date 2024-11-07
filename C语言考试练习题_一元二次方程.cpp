#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2;
	scanf("%d %d %d",&a,&b,&c);
	x1=(sqrt(b*b-4*a*c)-b)/2*a;
	x2=(-sqrt(b*b-4*a*c)-b)/2*a;
	if(x1<x2)
	{
		float t;
	t=x1;x1=x2;x2=t;
	}
	
	printf("%.2f %.2f",x1,x2);
	return 0;
}