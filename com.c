#include<stdio.h>
#include<conio.h>
int main()
    {
        int h1, h2, h3;
        printf("Enter the heights of three persons respectively:\n");
        scanf("%d %d %d", &h1, &h2, &h3);
        if(h1>h2 && h1>h3)
            {
                printf("h1 heighted person has more height among them");
            }
        else if(h2>h3 && h2>h1)
            {
                printf("h2 heighted person has more height among them");
            }    
        else if(h3>h1 && h3>h2)
                {
                    printf("h3 heighted person has more height among them");
                }    
            else
                {
                   if(h1==h2==h3)
                   {
                    printf("ok");
                   }
                }     
        return 0;
    }