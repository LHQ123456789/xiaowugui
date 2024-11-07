#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2;
	scanf("%d %d %d",&a,&b,&c);
	if(b*b-4*a*c<0) printf("No real root");
	else 
	{
		float der=sqrt(b*b-4*a*c);
        if(der==0) printf("%.2f",-b/(2*a)*1.0);
	    else if(der>0)
	    {
		x1=(-b+der)/2*a;
		x2=(-b-der)/2*a;
		printf("%.2f %.2f",x1,x2);
	    }
	}
	return 0;
}