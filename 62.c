#include<stdio.h>
int main(){
    int a,c;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    for (c=a-1;c>=0;c--){
           printf("%d ",b[c]); 
    }
    return 0;
}
