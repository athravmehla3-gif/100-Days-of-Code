#include <stdio.h>
#include <math.h>

int main()
{
int n,a = 0,digits =0;
printf("Enter a number = ");
scanf("%d",&n);
int temp = n;
while(temp!=0){
digits++;
temp /= 10;
}
temp = n;
while(temp!= 0){
int b = temp%10;
}
if (a ==n)
printf("%d is an Armastrong number.\n",n);
else
printf("%d is not an Armstrong number.\n",n);
return 0;
}
