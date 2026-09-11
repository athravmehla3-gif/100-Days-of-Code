#include<stdio.h>
int main(){
    int x,y,a=0,c,f,g;
    int e[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter the integer: ");
    scanf("%d",&x);
    y=x;
    int z=0;
    while(y!=0){
        z++;
        y/=10;
    }
    int b[z];
    for(int i=0; i<z; i++){
        y=x%10;
        e[y]++;
        x/=10;
    }
    f=0;
    for(int p=0;p<10;p++){
        if(e[p]>f){
           g=p;
           f=e[p]; 
        }
    }
    if(f){
        printf("%d",g);
    }
    return 0;
}
