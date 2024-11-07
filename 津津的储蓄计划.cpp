#include<stdio.h>
int main()
{
	int a[12],surplus=0,t,save=0;
	for(int i=0;i<12;i++) scanf("%d",&a[i]);
    for(int j=0;j<12;j++)
    {
    	surplus=surplus+300-a[j];
    	if(surplus<0) 
        {
    		printf("-%d",j+1);
    		return 0;
		}
    	if(surplus>=100)
    	{
    		t=surplus/100;
    		save+=t*100;
    		surplus%=100;
		}
	
	}
	int amount;
	amount=surplus+save*1.2;
    printf("%.d\n",amount);
	return 0;
}