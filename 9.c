#include <stdio.h>
#include <math.h>

int main()
{
float p;
float n,r,t;
printf("Enter value of p,n,r,t");
scanf("%f",&p);
scanf("%f",&n);
scanf("%f",&r);
scanf("%f",&t);
float SI = (p*r*t)/100.0;
float x = (1+ (r/100.0)/n);
float y = pow(x,n*t);
float A_ci = p*y;
printf("Simple intrest based on the value giben = %.2f.\n",SI);
printf("Amount(interest + principle) by compound interest = %.2f.\n",A_ci);
printf("CI by the value given(A-P) = %.2f.\n",A_ci - p);
return 0;
}
