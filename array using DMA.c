#include<stdio.h>
#include<stdlib.h>
int main(){
int i,*ptr;
ptr = (int*)malloc(10*sizeof(int));
printf("enter elements in array:\n");
for (i=0;i<10;i++){
    scanf("%d",(ptr+i));
}
for (i=0;i<10;i++){
    printf(" %d ",*(ptr+i));
free(ptr);
}
return 0;
}