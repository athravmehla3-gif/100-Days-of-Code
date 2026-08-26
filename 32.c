#include <stdio.h>

int main() 
{
int n,rev = 0;
printf("Enter the number = ");
scanf("%d",&n);
int a = n;
while(a!=0){
int rem = a%10;
rev = rev*10 + rem;
a /=10;
}
if(n == rev)
printf("%d is a palinsrome.\n",n);
else
printf("%d is not a palindtome.\n",n);
return 0;
}
