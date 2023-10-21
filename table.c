#include<stdio.h>
#include<conio.h>
int main()
   {
    int num;
    printf("Enter a number for that we want the table of that number:");
    scanf("%d", &num);
    int table;
    for(int i=1; i<=10; i++)
          {
            table=num*i;
            printf("%d\n", table);
          }
          return 0;
   }