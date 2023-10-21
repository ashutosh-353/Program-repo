#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

float pro(float*);
float pro2(float*);

int main(){
        
        float r, l, b, l2;

    printf("Enter the value of radius of circle:");
    scanf("%f", &r);
   
    float a=pro(&r);                           //Call by reference method

    printf("area of the circle=%f\n", a);

    float c=pro2(&r);

    printf("circumference of the circle=%f\n", c);


    return 0;
}

float pro(float *r){

        float area;

        area=3.14**r**r;                       //Call by reference method
        
        return area;
}

float pro2(float *r){
        float circumference;

        circumference=2*3.14**r;

        return circumference;

}