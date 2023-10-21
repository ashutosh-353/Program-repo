#include<stdio.h>
int main()
{
   for(int i=1; i<101; i++)
   {
    if(i==92)
    {
        continue;
    }
    if(i==2)
    {
        continue;
    }if(i==3)
    {
        continue;
    }
    printf("%d\n", i);
   }
    return 0;
}