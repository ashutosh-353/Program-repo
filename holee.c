#include<stdio.h>
#include<math.h>

void world();
void marvel();

int main()
{
    double n, i;
    double fact=1;
    printf("Enter any natural number:");
    scanf("%lf", &n);
    for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("Value of the factorial is%lf\n", fact);
        world();
        marvel();
        return 0;
}
  

void marvel()
        {
            printf("Okay\n");
        }


void world()
        {
            printf("Rock\n");
        }        

