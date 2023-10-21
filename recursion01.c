#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void recursion(int a);


void main(){

        int n=4;
        recursion(n);

}

void recursion(int a){
        if(a<1){
                return;
        }

        else{
                printf("%d", a);
                recursion(a-1);
        
        }
}