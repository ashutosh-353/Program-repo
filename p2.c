#include<stdio.h>
int main()
   {
        int a, b;
        printf("Enetr 1st number:");
        scanf("%d", &a);
        printf("Enter 2nd number:");
        scanf("%d", &b);
        b=a+b;
        a=b-a;
        b=b-a;
        printf("Value of a becomes:%d\n", a);
        printf("Value of b becomes:%d", b);
    return 0;
   }