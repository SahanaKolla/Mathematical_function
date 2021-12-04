#include<stdio.h>
void main(){
int a,b,c;
printf("Choose 1:Addition 2:Substraction 3:Multiplication 4.Division 5.Power 6.Reminder");
scanf("%d",&c);
printf("Enter two numbers");
scanf("%d %d",&a,&b);
switch(c){
 case 1:
  printf("Addition of %d,%d is %d", a,b,a+b);
  break;
 case 2:
  printf("Substraction of %d,%d is %d", a,b,a-b);
  break;
 case 3:
  printf("Multiplication of %d,%d is %d", a,b,a*b);
  break;
 case 4:
  printf("Division of %d,%d is %d", a,b,a/b);
  break; 
 case 5:
  printf("Power of %d,%d is %d", a,b,a^b);
  break; 
 case 6:
  printf("Reminder of %d,%d is %d", a,b,a%b);
  break;
default:
printf("Choose a valid option");
}
}
