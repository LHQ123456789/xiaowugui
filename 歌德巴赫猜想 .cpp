#include<stdio.h>
#include<math.h>
int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}
 
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	for (b=2;b<=a/2;b++)
	{
		if (is_prime(b)==1&&is_prime(a-b)==1)
			{
			    printf("%d %d",b,a-b);
			    break;
			}
	}
	return 0;
}