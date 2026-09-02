#include <stdio.h>
int main()
{
int num1,num2,a,b,temp;
printf("Enter 2 numbers: ");
scanf("%d %d",&a,&b);
num1 = a;
num2 = b;
while (b != 0){
temp = b;
b = a % b;
a = temp;
}
int LCM = (num1*num2)/a;
printf("The LVM of %d and %d = %d.\n",num1,num2,LCM);
return 0;
}
