#include<stdio.h>
void main(){
int n,r,s;
printf("enter a number");
scanf("%d",&n);
s=0;
while(n>0){
r=n%10;
n=n/10;
s=s+r*r;
}
printf("%d\n",s);
}