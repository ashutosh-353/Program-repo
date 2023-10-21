#include<stdio.h>

//FUNCTION PROTOTYPE

int cric_sum(int);


//MAIN FUNCTION 

void main(){

    int a, n;

    printf("Enter any number:");
    scanf("%d", &n);


    a=cric_sum(n);
    printf("SUM=%d", a);
}


//FUNCTION DEFINITION

int cric_sum(int x){
    int sum;
    if(x==0){
        return x;
    }

    sum=x+cric_sum(x-1);
    return sum;
}