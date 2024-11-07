#include<stdio.h>
int main()
{
	int a,b,y;
	scanf("%d %d",&a,&b);
	if(a==0||b==0) printf("%d",a+b);
	else if(a==1||b==1) printf("1");
	else
	{
		y=a%b;
		while(y!=0)
		{
			if(b>y)
			{
				a=b;
				b=y;
			} 
			else
			{
				a=y;
				b=a;
			}
			y=a%b;
		}
		printf("%d",b);
	}

	
	return 0;
}
	