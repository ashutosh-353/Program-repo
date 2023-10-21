#include<stdio.h>
void main()
{
    int n;
    float sum=0.0, num, avg;
    printf("Enter numbers of elements for calculating of average:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        {
            
            scanf("%f", &num);
            sum=sum+num;
        }
        avg=sum/n;
        printf("Average of numbers:%f", avg);
}