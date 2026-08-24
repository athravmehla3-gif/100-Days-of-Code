#include <stdio.h>
int main()
{
int n,rev = 0;
printf("Enter the nuber = ");
scanf("%d",&n);
int a = n;
while(a!=0){imt rem = a%10;
rev = rev*10 + rem;
a /= 10;
}
printf("The reverse of %d = %d.\n",n,rev);
return 0;
}
