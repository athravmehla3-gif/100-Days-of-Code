#include <stdio.h>
int main(){
    int n,a=2,c;
    printf("Enter a number:");
    scanf("%d",&n);
    while(a<=n){
        c=0;
        for (int i=2;i<a;i++){
            if (a%i==0){
               c=1; 
            }
        }
        if(c==0){
            printf("%d ", a);
        }
        a++;
    }
}
