#include <stdio.h>
int main()
{
char ch;
printf("Enter a chracter : ");
scanf("%c",&ch);
if (ch >= 'A' && ch <= 'Z');
 printf("Uppercase alphabet");
if (ch >= 'a' && ch <= 'z')
printf("Lowercase alphabet");
else if (ch >= '0' & ch  <= '9')
printf("Digit");
else
printf("Special chracter");
 
return 0;
}

