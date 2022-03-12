#include <stdio.h>
int fact(int a);
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d",fact(n));
}
int fact(int a){
if (a==0) 
return (1);
if (a==1)
return(1);
else
return a*fact(a-1);
}


