#include <stdio.h>
int main(){
    int a,b,c,d,e;
    for (a=1;a<=5;a++){
        b=a%2;
        if(b!=0){
            for(c=1;c<=a;c++){
            printf("*\n");
            }
        }
        else{
            printf(" ");
            printf("\n");
        }
    }
    for (d=4;d>=0;d--){
        b=d%2;
        if(b!=0){
            for(e=1;e<=d;e++){
            printf("*\n");
            }
        }
        else{
            printf(" ");
            printf("\n");
        }
    }
    return 0;
}
