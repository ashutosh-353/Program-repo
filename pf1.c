#include<stdio.h>
#include<conio.h>
int main()
    {
        int n, rem, pr=1;
        printf("Enter any number:");
        scanf("%d", &n);
        for( ; n!=0; )
          {
             rem=n%10;
             pr=pr*rem;
             n/=10;
          }

           printf("Product of the digits of the given number is %d", pr);
           return 0;        
    }