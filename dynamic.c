#include<stdio.h>
#include<stdlib.h>
# define NULL 0

int main(){
    int i,n,sum=0;
    int*ptr;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr==NULL){
        printf("the memory is full");
    }else{
        printf("enter the elements in array\n");
        for (int i=0;i<n;i++){
            scanf("%d",(ptr+i));
        }
        for (i=0;i<n;i++){
            printf("%d elements in array is:%d\n",(i+1),*(ptr+i));
        }
    }
    return (0);
}