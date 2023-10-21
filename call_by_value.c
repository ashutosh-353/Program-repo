#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

float pro1(float);
float pro2(float);

float main(){

    float radius;

    printf("Enter the value of radius of the circle:");         //Call by value method
    scanf("%f", &radius);

    float r1=pro1(radius);
    printf("Area=%f\n", r1);

    float r2=pro2(radius);
    printf("Circumference=%f\n", r2);


    return 0;
}

float pro1(float x){
    float area;
    area=3.14*x*x;                                              //Call by value method

    return area;                                               
}

float pro2(float x){
    float circumference;
    circumference=2*3.14*x;

    return circumference;
}


