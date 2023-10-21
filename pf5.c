#include<stdio.h>
int main()
{
      int a,b,i=1,x;
      printf("Enter Two Numbers To Find H.C.F\n");
      printf("Enter First Number  : ");
      scanf("%d", &a);
      printf("\nEnter Second Number : ");
      scanf("%d",&b);
      while(i<=a || i<=b)
      {
            if(a%i==0 && b%i==0)
                 { x=i;  }
            i++;
      }

      printf("H.C.F of %d & %d is %d",a,b,x);
      return 0;
}