#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr=NULL;
    char name[100];
    ptr = fopen("text.txt","w");
    printf("enter the message here:");
    gets(name);
    fputs(name,ptr);
    printf("File written successfully!");
    fclose(ptr);
return 0;
}