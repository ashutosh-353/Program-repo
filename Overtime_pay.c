#include<stdio.h>
#include<conio.h>
int main()
            {
                 float hours[10], overtime_hours[10], overtime_pay[10];
                 int i;

                 //Calculating of number of hours for each employee

                 for(i=1; i<=10; i++)
                  {
                        printf("Employee %d works for hours:", i);
                        scanf("%f", &hours[i]);
                  }

                  //Calculating the overtime hours and overtime pay for each employee

                  for(i=1; i<=10; i++)
                        {
                              if(hours[i]>40)
                                    {
                                          overtime_hours[i]=hours[i]-40;
                                          overtime_pay[i]=overtime_hours[i]*12.00;
                                    }

                              else
                                    {
                                          overtime_hours[i]=0.00;
                                          overtime_pay[i]=0.00;
                                    }      

                        }            

                  //printing of overtimepay of the employees

                  printf("Overtimepay of the employees are:\n");
                  for(i=1; i<=10; i++)
                        {
                              printf("Overtime_pay of the employee %d is %f\n", i, overtime_pay[i]);
                        }                  
                        
                  return 0;
            }



