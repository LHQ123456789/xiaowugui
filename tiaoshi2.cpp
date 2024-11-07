
#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char b[N]={};
    int i = 0,j,n,t;
    printf("Enter message to be encrypted: ");
    do{
       t = getchar();
       if(t=='\n') break;
       b[i] = t;
       i++;
    }while(t !='\n');
    printf("Enter shift amount (1-25):");
    scanf("%d",&n);
   for(i = 0;b[i] != '\0';++i){
       if(b[i] >='A'&&b[i] <= 'Z'){
           b[i] = b[i]+n;
            if(b[i]>'Z') b[i] = b[i] - 26;
       }
        else if(b[i] >='a'&&b[i] <= 'z'){
           b[i] = b[i]+n;
           if(b[i]>'z') b[i] = b[i] - 26;
       }
    }
    
    printf("Encrypted message:");
    for(i = 0; b[i] != '\0';++i){
        printf("%c",b[i]);
    }
    return 0;
}