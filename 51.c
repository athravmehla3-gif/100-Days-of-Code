#include <stdio.h>
int main(){
    int a,b,c,d;
    for(a=1;a<=5;a++){
        b=5-a;
        c=b+1;
        d=0;
        while(d<b){
            printf(" ");
            d++;
        }
        while(c<=5){
            printf("%d",c);
            c++;
        }
    printf("\n");    
    }
    return 0;
}
