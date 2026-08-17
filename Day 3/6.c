#include <stdio.h>
int main() {
int a,b,c;
printf("enter a number ");
scanf("%d",&a);
printf("enter b nunber ");
scanf("%d",&b);
c=a;
a = b;
b = c;
printf("new value of a=%d\n",a);
printf("new value of b=%d",b);
return 0;
}
