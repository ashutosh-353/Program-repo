#include<stdio.h>
int main()
   {
    int n, rem=0, a[n];
    printf("Enter any number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
       {
           scanf("%d", &a[i]);
       }
        
        for(int i=1; i<=n; i++)
           {
             rem=a[i]%10;

           }

           if(rem%10==0)
               {
                 printf("Yes");

               }
                
                else 
                   {
                      printf("No");
                   }
                   return 0;
   }