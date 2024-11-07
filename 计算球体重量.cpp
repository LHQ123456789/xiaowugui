#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	double c,d;
	c=3.1415926*(a/20)*(a/20)*(a/20)*7.86*4/3;
	d=3.1415926*(b/20)*(b/20)*(b/20)*19.3*4/3;
    printf("%.3f %.3f",c,d);
	return 0;
}
