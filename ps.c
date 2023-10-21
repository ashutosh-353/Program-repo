#include<stdio.h>
void main()
{
   int m;
   printf("enter any number");
   scanf("%d", &m);
   int i=0;
   int sum=0;
   while(i<=m){
         sum=sum+i;
   }
   printf("%d", sum);
 }