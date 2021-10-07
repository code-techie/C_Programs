#include<stdio.h>
int main(){
    int i,n,sum;
    int*ptr;
    ptr = (int*)malloc(n*sizeof(int));
    printf("enter the number of elements in array");
    scanf("%d",&n);
    if (ptr==NULL){
        printf("the memory is full");
    }else{
        printf("enter the elements in array");
        for (int i=0;i<n;i++){
            scanf("%d",(ptr+i));
        }
    }
}