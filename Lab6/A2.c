#include<stdio.h>
void main()
{
  float salary=0,hra,da,gross;
  printf("Enter Salary");
scanf("%f",salary);
if(salary>=30,000){
    hra=0.3*salary;
    da=0.95*salary;
   }
        if(salary>=20,000){
    hra=0.25*salary;
    da=0.9*salary;
    }
        if(salary>=10,000){
    hra=0.2*salary;
    da=0.8*salary;
    gross=salary+hra+da;
    }
    printf("%f",salary);       
}

