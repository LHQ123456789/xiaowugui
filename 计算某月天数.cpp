#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<1900||a>2030||b<1||b>12) return 0;
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
	   printf("31");
	else if(b==4||b==6||b==9||b==11)
	   printf("30");
	else if(b==2)
	{
		if((a%4==0&&a%100!=0)||(a%400==0)) printf("29");
		else printf("28");
	}
	return 0;
}