#include <stdio.h>
int fact(int a);
void main(){
int n,r,rev=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(n>0){
r=n%10;
rev=rev+fact(r);
n=n/10;
}
if(rev==x)
printf("Strong number");
else 
printf("Not strong number");
}
int fact(int a){
if (a==0) 
return (1);
if (a==1)
return(1);
else 
return a*fact(a-1);
}

