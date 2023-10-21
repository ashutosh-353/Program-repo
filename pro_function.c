#include<stdio.h>
#include<conio.h>

void _hcf();
void _armstrong();
void _prime();
void power_of_number();
void pr_digits_ofnumber();
void palindrome_number();
void factorial_ofnumber();
void sq_cube_number();
void even_odd();        //Using ternary operator...
void swap_arithmatic();
void swap_thirdvar();

int main()
   {
     swap_arithmatic();
   

    return 0;
   }

   void _hcf()
         {
            int n1, n2, hcf, i=1;

            printf("Enter two numbers respectively:\n");
            scanf("%d %d", &n1, &n2);

            while(i<=n1 && i<=n2)
                {
                    if(n1%i==0 && n2%i==0)

                      {
                        hcf=i;
                      }
                      i++;
                }
                printf("Value of hcf of %d and %d is %d", n1, n2, hcf);


         }

         void _armstrong()
             {
                int num, rem, i, arm=0, org;

                printf("\nEnter any number:");
                scanf("%d", &num);
                
                org=num;

                for(i=1; i!=0; i++)
                        {
                            rem=num%10;
                            arm=(rem*rem*rem)+arm;
                            num/=10;
                        }

                if(org==arm)
                    {
                        printf("%d is an armstrong number", org);
                    }        

                else
                    {
                        printf("%d is not an armstrong number", org);
                    }    

                    
             }

             void _prime()
               {
                 
                 int num, count=0, i; 

                 printf("\nEnter any number:");
                 scanf("%d", &num);

                for(i=1; i<=num; i++)
                   {

                    if(num%i==0)
                       {
                        count=count+1;
                       }
                   }

                   if(num==1)
                      {
                        printf("1 is neither prime nor composite");
                      }

                      else if(count==2)
                        {
                            printf("%d is a prime number", num);
                        }

                        else{
                             printf("%d is not a prime number", num);
                        }

               }

               void power_of_number()
                  {
                    int base, exponent, power=1;

                    printf("\nEnter base and exponent respectively:");
                    scanf("%d %d", &base, &exponent);

                    for(int i=1; i<=exponent; i++)
                        {
                            power=power*base;
                        }    
                        
                        printf("Power of the given number is %d", power);
                  }

                void even_odd()
                    {
                        int num;

                        printf("Enter an age:");
                        scanf("%d", &num);

                        num>17 ? printf("eligible for vote") : printf("Not eligible for vote");
                    }

                    void swap_arithmatic()
                          {
                            int a, b;
                            scanf("%d %d", &a, &b);
                            printf("\nEntered value of a and b are a=%d b=%d\n", a, b);
                           

                            a=a+b;
                            b=a-b;
                            a=a-b;

                            printf("The value of a and b after swaping them is:\n a=%d b=%d", a, b);
                          }