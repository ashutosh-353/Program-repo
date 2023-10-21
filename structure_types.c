#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student {
        char name[100];
        int roll_no;
        float cgpa;

};

int main()
  {
    
  /*struct student mth[100];
    strcpy(mth[0].name , "Virat Kohli");
    mth[0].roll_no=2202050041;
    mth[0].cgpa=9.8;

    printf("name=%s\n", mth[0].name);
    printf("roll_number=%u\n", mth[0].roll_no);
    printf("CGPA=%f\n", mth[0].cgpa);  
    */

   struct student mth[100]={"Shradha", 2202050041, 9.5};
   printf("Roll_No=%u\n", mth[0].roll_no);
   printf("Name=%s\n", mth[0].name);
   printf("CGPA=%f\n", mth[0].cgpa);



    return 0;
  }