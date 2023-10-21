#include<stdio.h>
void main()
{
    int n;
    float num, avg;
    printf("Enter number of elements to be calculated in average:");
    scanf("%d", &n);
    float sum=0;
    for(int i=1; i<=n; i++)
        {
            printf("Enter the number%d:", i);
            scanf("%f", &num);
            sum=sum+num;
        }
        avg=sum/n;
        printf("Average is:%f", avg);
}