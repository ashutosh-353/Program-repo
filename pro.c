#include<stdio.h>
void main()
{
     int n;
     printf("enter any number:");
     scanf("%d", &n);
     int i=1;
     do
     {
          printf("%d\n", n*i);
          i++;
          /* code */
     } while(i<=10);
     
         /*{
           printf("%d\n", n*i);
           i=i+1;
         }*/

     
}