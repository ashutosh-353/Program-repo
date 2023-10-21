#include <stdio.h>
void find_gcd();

int main()
{

    find_gcd();

    return 0;
}

void find_gcd()
{

    int num1, num2, hcf, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
}
