#include <stdio.h>

int main() {
   int n;
   float sum = 0.0, num, avg;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   for(int i=1; i<=n; i++) {
      printf("Enter number%d:", i);
      scanf("%f", &num);
      sum=sum+num;
   }

   avg = sum / n;
   printf("Average = %f", avg);

   return 0;
}
