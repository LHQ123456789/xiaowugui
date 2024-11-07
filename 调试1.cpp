#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char b[N];
    int i = 0,j,n,t;
    printf("Enter message to be encrypted: ");
    do{
       t = getchar();
       b[i] = t;
       i++;
    }while(t !='\n');
    printf("\nEnter shift amount (1-25):");
    scanf("%d",&n);
    for(i = 0;b[i] != '\0';i++)
	{
        if(b[i] >='A'&&b[i] <= 'Z')
		{
            for(j = 0;j < 27;j++)
			{
                if(b[i] == A[j])
				{
                    if(i + n < 26) b[i] = A[j+n];
                    else b[i] = A[i+n-26];
                }
            }
        }
        else if(b[i] >='a'&&b[i] <= 'z')
		{
            for(j = 0;j < 27;j++)
			{
                if(b[i] == a[j])
				{
                    if(i + n < 26) b[i] = a[j+n];  
                    else b[i] = a[i+n-26];
                }
            }
        }
    }
    printf("Encrypted message:");
    for(i = 0; b[i] != '\0';i++)
	{
        printf("%c",b[i]);
    }
    return 0;
}