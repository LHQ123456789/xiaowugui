#include<stdio.h>
#include<math.h>
int main()
{
    float d,mon;
    scanf("%f",&d);
    if(d<=110) printf("%.2f",d*0.5);
	else if(d>210) 
	{
		mon=110+(d-210)*0.7;
		printf("%.2f",mon);
	}
	else 
	{
		mon=55+(d-110)*0.55;
	    printf("%.2f",mon);
	}
	return 0;
}