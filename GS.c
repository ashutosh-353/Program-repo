#include<stdio.h>
#include<conio.h>
int main()
  {
    int n1, n2, Add, Sub, mul, mod;
    float div;
    printf("Enter the 1st number:");
    scanf("%d", &n1);
    printf("\nEnter the 2nd number:");
    scanf("%d", &n2);
    Add= n1+n2;
    printf("Addition of these two numbers is:%d\n", Add);
    Sub= n1-n2;
    printf("Substraction of these two numbers is:%d\n", Sub);
    mul= n1*n2;
    printf("multiplication of these two numbers is:%d\n", mul);
    div= n1/n2;
    printf("Division of these two numbers is:%f\n", div);
    mod= n1%n2;
    printf("Remainder of these two numbers is:%d\n", mod);
    return 0;

    
  }