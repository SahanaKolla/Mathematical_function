#include <stdio.h>
void main(){
int n,sum=0,i,a[10];
float avg;
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Element :%d",i+1);
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
printf("%f",avg);
}
