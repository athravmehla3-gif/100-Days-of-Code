#include<stdio.h>
int main(){
  int a,b,c,i,x;
  for(a=1;a<=5;a++){
    b=a-1;
    c=5-b;
    i=0;
    x=0;
    while(x<b){
      printf(" ");
      x++;
    }
    while(i<c){
      printf("*");
      i++;
    
    }
    printf("\n");
  }
  return 0;
}
