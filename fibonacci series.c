#include<stdio.h>
int main(){
    int a=0,b=1;
    int i;
    while(i<10){
        printf("%d ",a);
        a=b;
        b=a+b;
        i=i+1;
    }
    return 0;
}