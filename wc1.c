#include<stdio.h>
void main()
{
    int var;
    printf("Enter a number between 1, 2, 3, 4 for execution of a particular operation:");
    scanf("%d", &var);
    switch(var)
    {
        float a,b;
        case 1:
                printf("Enter 1st number:");
                scanf("%f", &a);
                printf("Enter 2nd number:");
                scanf("%f", &b);
                printf("%f", a+b);
                break;
        case 2:
                printf("Enter 1st number:");
                scanf("%f", &a);
                printf("Enter 2nd number:");
                scanf("%f", &b);
                printf("%f", a-b);
                break;
        case 3:
                printf("Enter 1st number:");
                scanf("%f", &a);
                printf("Enter 2nd number:");
                scanf("%f", &b);
                printf("%f", a*b);
                break;
        case 4:
                printf("Enter 1st number:");
                scanf("%f", &a);
                printf("Enter 2nd number:");
                scanf("%f", &b);
                printf("%f", a/b);
                break;
    }
}