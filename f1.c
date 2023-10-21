#include<stdio.h>

float rectangleArea(float a, float b);

int main()
  {
    float a,b;
    printf("Enter value of a,b respectively:");
    scanf("%f %f", &a, &b);
    printf("Value is %f", rectangleArea(a, b));


    return 0;
  }

  float rectangleArea(float a, float b)
      {
        return a*b;
      }
