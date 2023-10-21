#include<stdio.h>
#include<string.h>


        struct Student{
            char name[50];
            int rollNo;
            float CGPA;
        };
        
        int main(){

        
        struct Student s1;
        
        strcpy(s1.name, "Aakanshya Patra");
        s1.rollNo=2202050047;
        s1.CGPA=6.9;

        printf("printed name is %s\n", s1.name);
        printf("printed roll-number is %d\n", s1.rollNo);
        printf("printed CGPA is %f\n", s1.CGPA);

        return 0;

        }



        


  