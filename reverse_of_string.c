#include <stdio.h>
#include <string.h>
void main(){
char s[10],temp;
int i,l;
printf("Enter a string:\n");
scanf("%s",s);
l=strlen(s)-1;
for(i=0;i<l;i++){
temp=s[i];
s[i]=s[l];
s[l]=temp;
l--;
}
printf("%s\n",s);
}
