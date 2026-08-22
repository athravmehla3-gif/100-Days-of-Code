#include <stdio.h>
int main() {
int a;
printf("enter a value ");
scanf("%d",&a);
int area=3.14159*a*a;
int per=2*3.14159*a;
printf("area of circle=%d\n",area);
printf("circumference of circle=%d",per);
return 0;
}
