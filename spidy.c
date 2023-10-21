//wap to print the numbers from 1 to 100,but replace multiples of 3 with fizz and multiples of 5 with buzz
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);

    if(n%2==0)
          {
            printf("Entered number is even");
          }

          else if(n%2!=0)
                  {
                    printf("Entered number is odd");
                  }
                    else
                     {
                        printf("Invlid input");
                     }

    } 
