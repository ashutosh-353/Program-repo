#include<stdio.h>
int main()
{
    float num1, num2, calc;
    int choice;
    
    printf("Input your 1st number\n");
    scanf("%f", &num1);
    printf("Input your 2nd number\n");
    scanf("%f", &num2);

    printf("Select your operation to do:-\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d", &choice);

    switch(choice)
          {
            case 1:calc = num1+num2;
                printf("Addition of these two numbers is:%f", calc);
                break;
            case 2:calc = num1-num2;
                printf("Substraction of these two numbers is:%f", calc);
                 break;
            case 3:calc = num1*num2;
                printf("Multiplication of these two numbers is:%f", calc);
                 break;
            case 4:calc = num1/num2;
                    if(num2==0)
                    {
                        printf("Division can't doable/Division doesn't exist");
                    }
                    else
                    {
                        printf("Division of these two numbers is:%f", calc);
                    }
                     break;
            default: 
                    printf("Invalid input");

          }
return 0;
}