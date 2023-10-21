#include<stdio.h>
#include<conio.h>

int main()
    {
        int base, exponent, result=1;

        printf("Enter the value of base:");
        scanf("%d", &base);
        printf("Enter the value of the exponent:");
        scanf("%d", &exponent);

        for(int i=1; i<=exponent; i++)
            {
                result=result*base;
            }

            printf("%d to the raise %d is %d", base, exponent, result);

        return 0;
    }

