#include <stdio.h>
void main(){
int n1,n2,gcd;
printf("Enter 2 numbers:");
scanf("%d %d",&n1,&n2);
for(int i=1;i<=n1 && i<=n2;i++){
if (n1%i==0 && n2%i==0)
gcd=i;
break;
}
printf("gcd:%d\n",gcd);

printf("lcm:%d",(n1*n2)/gcd);
}
