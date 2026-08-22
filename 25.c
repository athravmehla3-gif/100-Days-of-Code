#include<stdio.h>

int main(){
int option,a,b;
printf("Enter the number = "); 
scanf("%d%d",&a,&b);
printf("Enter the operation you want to do.\nl for Addition.\n2 for subtaction.\n3 for division.\n5 for modulus.\noption = ");
scanf("%d",&option);
switch(option){
case 1:
printf("The summation of the given number = %d\n",a+b);
break;
case 2:
printf("The difference of %d and %d =%d\n",a,b,a-b);
break;
case 3:
printf("The product of %d and %d = %d\n",a,b,a*b);
break;
case 4:
if(b == 0) {
printf("Division by 0 is not possible.\n");
}
else{
printf("The qutient of %d and %d = %d.\n",a,b,a/b);
}
break;
case 5:
if(b == 0){
printf("modulus by is not possible.\n");
}
else{
printf("The modulus  of %d and %d = %d\n",a,b,a%b);
}
break;
defalt:
printf("Invalid input try again kiddo. \n");
break;
}
return 0;
}
