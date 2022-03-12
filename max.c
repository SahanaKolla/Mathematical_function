#include <stdio.h>
void main(){
int n,a[10],i;
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Element %d:",i+1);
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
if (a[0]<a[i])
a[0]=a[i];
}
printf("%d",a[0]);
}
