#include<stdio.h>
int main(){
    int a,c,d=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    for (c=0;c<a;c++){
        d=d+b[c];
    }
    printf("%d ",d);
    return 0;
}
