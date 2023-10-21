#include<stdio.h>
int main()
   {
    int n1, rem=0, org, reverse=0;
    printf("Enter any number:");
    scanf("%d", &n1);
    org=n1;
    for( ; n1!=0; )
        {
            rem=n1%10;
            reverse=reverse*10+rem;
            n1=n1/10;
        }
           
           if(reverse==org)
                {
                    printf("%d is a palindrome number", org);
                }
                else  
                   {
                    printf("%d is not a palindrome number", org);
                   }

    return 0;
   }