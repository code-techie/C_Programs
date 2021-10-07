#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr=NULL;
    char a[100]="This is text file";
    //ptr = fopen("text.txt","r");
    // fscanf(ptr,"%s",a);
    // printf("the content of file is: %s",a);
    ptr = fopen("text.txt","w");
    fprintf(ptr,"%s",a);         // writing on the file

    return 0;
}