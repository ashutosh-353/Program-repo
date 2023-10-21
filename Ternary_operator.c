#include<stdio.h>
#include<conio.h>

int main()
{
    int num;

    printf("Enter any natural number:");
    scanf("%d", &num);

    num%2==0 ? printf("%d is even", num) : printf("%d is odd", num);
    return 0;
}