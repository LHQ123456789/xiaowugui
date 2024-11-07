#include<stdio.h>
int main()
{
    int year,month,day;
    scanf("%d/%d/%d",&year,&month,&day);
    if(month<2||month==2&&day<=29)
    {
        printf("%d",31*(month-1)+day);
    }
    else
    {
        if(year%4==0&&year%100!=0||year%400==0)
        {
            if(month%2==1&&month<8||month%2==0&&month>=8)
            {
                printf("%d",29+(month-1)/2*31+((month-1)/2-1)*30+day);
            }
            else
            {
                printf("%d",29+month/2*31+(month/2-1)*30+day);
            }            
        }
        else
        {
            if(month%2==1&&month<8||month%2==0&&month>=8)
            {
                printf("%d",28+(month-1)/2*31+((month-1)/2-1)*30+day);
            }
            else
            {
                printf("%d",28+month/2*31+(month/2-1)*30+day);
            }            
        }
    }
    return 0;
}