#include<stdio.h>
#include<conio.h>
 int main()
    {
        float p, r, t, si=0;
        printf("Enter Principal Value:\n");
        scanf("%f", &p);
        printf("Enter the value of Rate of Interest:\n");
        scanf("%f", &r);
        printf("Enter time in second:\n");
        scanf("%f", &t);

        si=(p*r*t)/100;
        printf("Required Simple Interest is %f", si);
        return 0;

    }