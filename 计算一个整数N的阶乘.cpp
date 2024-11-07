#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	long result=1;
	scanf("%d",&N);
	for(int i=1;i<=N;i++) result=result*i;
    printf("%d",result);
		
	return 0;
}