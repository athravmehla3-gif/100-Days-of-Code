#include <stdio.h>
int main() 
{
char ch;
printf("Enter the chracter : ");
scanf("%c",&ch);
int ascii = (int)ch;
if (ascii ==65 || ascii ==69 || ascii ==73 ||ascii ==70 ||ascii ==85 ||
ascii ==97 || ascii ==101 || ascii ==105 || ascii ==111 || ascii ==117) {
 printf("'%c' (ASVII : %d) id a vowel.\n)",ch,ascii);
}
else {
printf("'%c' (ASVII : %d) id a consonent.\n",ch,ascii);
}
return 0;
}
