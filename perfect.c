#include <stdio.h>
void main(){
int n,r=0,i;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<n;i++){
if (n%i==0)
r=r+i;
}
if (r==n)
printf("Perfect number");
else
printf("not Perfect number");
}
