#include<stdio.h>
#include<conio.h>
void main()
  {
       int i, result=1, base, exponent;
       printf("Enter Base and Exponent respectively:\n");
       scanf("%d %d", &base, &exponent);
       for(i=1; i<=exponent; i++)
         {
             result=result*base;
         }

         printf("Power of the given number w.r.t a given number is %d^%d = %d", base, exponent, result);

  }