#include <stdio.h>
void main(){
int n,r,rev=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(n>0){
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(x==rev)
printf("palindrome");
else
printf("not palindrome");
}
