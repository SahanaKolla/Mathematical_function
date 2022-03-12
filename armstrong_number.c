#include <stdio.h>
void main(){
int n,r,rev=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(n>0){
r=n%10;
rev=rev+r*r*r;
n=n/10;
}
if(x==rev)
printf("armstrong");
else
printf("not armstrong");
}
