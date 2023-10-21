#include<stdio.h>
#include<conio.h>
#include<math.h>
   int main()
      {
        float p, r, n, t, ci=0;
        printf("Enter the values of p, r, n, t respectively:\n");
        scanf("%f %f %f %f", &p, &r, &n, &t);

        ci=pow(p*(1+(r/n)), (n*t-p));

        printf("Value of the Compound Interest is %f", ci);

        return 0;
      }