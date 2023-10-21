#include<stdio.h>
#include<math.h>

void moment();
void tripura();
void resource();


int main()
    {
        int n,fact=1;
        printf("Enter any number:");
        scanf("%d", &n);
        int i=1;
        while(i<=n)
             {
                fact=fact*i;
                i++;
             }
             printf("the value of the factorial of this number:%d\n", fact);

             moment();
             tripura();
             resource();
             return 0;
    }


    void moment()
            {
                for(int i=0; i<10; i++)
                         {
                            printf("Hello moment\n");
                         }
            }

            void tripura()
                    {
                        for(int j=1; j<=10; j++)
                                {
                                    printf("Hello tripura\n");
                                }
                    }


                    void resource()
                      {
                        for(int k=0; k<10; k++)
                                {
                                    printf("Hello resource\n");
                                }
                      }
                      


