#include<stdio.h>

void count(int n);

void main(){
    count(3);
}

void count(int n){
        static int d=1;     //Using the static keyword
        printf("%d", n);
        printf("%d", d);

        d++;
        if(n>1)
            count(n-1);
        

        printf("%d", d);

}