#include<stdio.h>
int main()
{
	char a[10];
	for(int i=0;i<10;i++)
			scanf("%c",&a[i]);
	for(int j=0;j<10;j=j+2)
		printf("%c",a[j]+32);
	printf("!");
	return 0;
}