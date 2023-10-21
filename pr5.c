#include<stdio.h>
#include<conio.h>
   int main()
      {
        float p, r, t, si=0;
        printf("Enter the principal value:");
        scanf("%f", &p);
        printf("Enter the value of rate of interest:");
        scanf("%f", &r);
        printf("Enter the value of time period:");
        scanf("%f", &t);

        si=(p*r*t)/100;

        printf("Value of the Simple Interest is %f", si);

        return 0;
      }