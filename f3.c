#include<stdio.h>

float convertTemp(float cel);

int main()
  {
    float far;
    far=convertTemp(32);
    printf("%f", far);


    return 0;
  }

  float convertTemp(float cel)
    {
        float far=(cel*(9.0/5.0))+32;
        return far;
    }
