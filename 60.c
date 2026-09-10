#include<stdio.h>
int main(){
    int a,c,d=0,e=0,f=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    for (c=0;c<a;c++){
        if(b[c]==0){
           d++; 
        }
        if(b[c]>0){
           e++; 
        }
        if(b[c]<0){
           f++; 
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d",e,f,d);
    return 0;
}
