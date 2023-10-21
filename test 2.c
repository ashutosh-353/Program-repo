//Finding that the entered number is either armstrong number or not

#include<stdio.h>

#include<conio.h>

int main()
  {
    int rem, i=0, n, org;

    printf("Enter any number=");

    scanf("%d", &n);
    org=n;
    while(n!=0)

     {
        rem=n%10;
        i=(rem*rem*rem)+i;
        n=n/10;

     }

     if(org==i)

      {
        printf("%d is an armstrong number", org);

      }

      else{
        printf("%d is not an armstrong number", org);
      }






    return 0;
  }