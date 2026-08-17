#include<stdio.h>
int main(){
int n;
printf("Enter the nth term = ");
scanf("%d",&n);
int sum = (n*(n+1))/2;
printf("The sum of n terms = %d.\n",sum);
return 0;
}
