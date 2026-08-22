#include <stdio.h>
int main() {
int units,bill;
printf("Entern the number of units consmed =  ");
scanf("%d",&units);
if(units<0){
printf("Invalid input!.\n");
}
else if (units<=100){
bill=units*5;
printf("Your electricity bill is = %d.\n",bill);
}
else if (units <=200){
bill = 100*5 + (units-100)*7;
printf("Your electricity bill is = %d.\n",bill);
}
else if (units <= 300){
bill = 100*5 +( units -200)*10;
printf("Your electricity bill is = %d \n",bill);
}
else {
bill = 100*5 +100*10 + (units-300)*12;
printf("Your electricity bill is = %d \n",bill);
}
return 0;
}

