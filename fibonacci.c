#include <stdio.h>
int fib(int a);
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d",fib(n));
}
int fib(int a){
if (a==1) 
return (0);
if (a==2)
return(1);
else
return fib(a-1)+fib(a-2);
}
