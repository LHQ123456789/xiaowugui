#include <stdio.h>
#include<math.h>
int main()
// #define area(a,b,c,p) ((p ( p - a)(p - b)(p - c))^(1/2))
{
    int a,b,c,e;
    float s;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    e = (a + b + c)/2;
    s = sqrt(e*( e - a)*(e - b)*(e - c));
    if ((a + b > c) && (b + c > a) && (a + c > b))printf("The area is:%f",s);
    else printf("not exist");
    return 0;
}