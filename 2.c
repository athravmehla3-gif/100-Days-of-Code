#include  <stdio.h>
int main() {
int a,b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
int sum=a+b;
int dif=a-b;
int pro=a*b;
float div=a/b;
int rem=a%b;
printf("sum=%d\n",sum);
printf("difference=%d\n",dif);
printf("product=%d\n",pro);
printf("division=%.f\n",div);
printf("quotient=%d\n",rem);
return 0;
}
