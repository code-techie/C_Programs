#include<stdio.h>
int main(){
    int arr[10];
    for (int i = 0;i<10;i++){
        printf("enter %d the number is-> %d\n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<10;i++){
    printf("\t Your %d entered the number is: %d\n",(i+1),arr[i]);
    }
    return 0;
}