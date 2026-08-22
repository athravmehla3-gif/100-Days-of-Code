#include <stdio.h>
int main() {
int a,b;
printf("enter a value ");
scanf("%d",&a);
printf("enter b value ");
scanf("%d",&b);
int  area=a*b;
int per=2*(a+b);
printf("area of rectangle=%d\n",area);
printf("perimeter of rectangle=%d\n",per);
return 0;
}
