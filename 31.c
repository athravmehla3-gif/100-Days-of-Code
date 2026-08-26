#include <stdio.h>

int main() 
{
int n,num;
printf("Entre the number = ");
scanf("%d",&n);
int temp = n;
while (temp!=0){
int rem = temp%2;
num = num*10+rem;
temp /=2;
}
int t = num;
int binary = 0;
while(t!= 0){
int rem = t%10;
binary = binary*10 +rem;
t /= 10;
}
printf("%d is binary form of number %d.\n",binary,n);
return 0;
}
