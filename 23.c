#include <stdio.h>
 int main() {
 int days,fine;
printf("Enter the number of days you're due = ");
scanf("%d",&days);
if (days<=5){
fine = 2*days;
printf("Your fine is = %d.\n",fine);
}
else if(days>5 && days<=10){
fine = (5)*2 +(days -5)*4;
printf("your fine is = %d.\n",fine);
}
else if(days>10 && days <=30){
fine = 5*2 + (5)*4 +  (days -10)*6;
printf("Your fine is = %d.\n",fine);
}
else if(days > 30){
fine = (5)*2 + (5)*4 + (20)*6;
printf("Your fine is = %d.\n Your membership has been cancled.\n",fine);
}
else {
printf("invalid input!\n");
}
return 0;
}
