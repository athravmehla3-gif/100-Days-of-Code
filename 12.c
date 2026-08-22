#include <stdio.h>
 int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);
if(n>0){
printf("%d is a positive number.\n",n);
}
else if(n<0){
printf("%d is anegative number.\n",n);
}
else {
printf("The given number is 0.\n");
}
return 0;
}
