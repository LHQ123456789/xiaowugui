#include<stdio.h>
int main()
{
	int a,b,result;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	if(c=='+') result=a+b;
	else if(c=='-') result=a-b;
	else if(c=='*') result=a*b;
	else if(c=='/') result=a/b;
	else if(c=='%') result=a%b;
	printf("%d%c%d=%d",a,c,b,result);
	return 0;
}