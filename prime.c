//Finding the prime number, armstrong number, palindrome number. hcf of two numbers...
#include<stdio.h>
#include<conio.h>

void prime();
void armstrong();
void palindrome();
void hcf();

// In the main function we will find the hcf of two function and will call other three function...
int main()

    {

      prime();
      return 0;
    }
      
    void prime()
      {
         int flag=0, div, n;

         printf("Enter any number:");
         scanf("%d", &n);

         for(div=2; div<n; div++)

           {
            if(n%div==0)
              {

               flag=1;
               break;
              }
           }

            if(n==1)

           {
            printf("1 is neither prime number nor composite number");
           }
             
             else if(flag==0)
                {
                  printf("%d is a prime number", n);
                }

                else  {
                    printf("%d is not a prime number", n);
      }


      }
