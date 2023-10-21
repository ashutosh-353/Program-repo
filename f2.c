#include<stdio.h>

int fact(int n);

int main()
  {
    printf("factorial of the given number is: %d", fact(4));
    return 0;
  }

  //Recursion function
  int fact(int n)
    {
        if(n==1)
         {
            return 1;
         }
                                      //This is the Base case condition in recursion
         if(n==0)
          {
            return 1;
          }
        int factNm1=fact(n-1);    //sum of 1 to n-1
        int factN=factNm1*n;
        return factN;

    }