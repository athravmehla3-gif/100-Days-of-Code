#include <stdio.h>
int main(){
  int a,b,c=5;
  for (a=1;a<=5;a++){
    b=5-a+1;
    while(b<=5){
      printf("%d", b);
      b++;
    }
    printf("\n");
  }
  return 0;
}
