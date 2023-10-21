/*Example of non-tail recursion*/

#include<stdio.h>

int print(int);

void main(){
    int x;

    x=print(10);

    printf("Final value:%d", x);
}

int print(int a){
    if(a<1){
        return 0;
    }
    
    else{
        return 1+print(a/2);
    }
    
}