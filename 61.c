#include<stdio.h>
int main(){
    int a,c,d=0,e=0,x=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    printf("Enter no. of element to search in array: ");
    scanf("%d",&e);
    for (c=0;c<a;c++){
        if(b[c]==e){
           printf("Found at index %d",c);
           x++;
           break; 
        }
    }
    if(x==0){
        printf("-1");
        }
    return 0;
}
