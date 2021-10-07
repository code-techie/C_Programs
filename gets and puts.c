#include<stdio.h>
int main(){
    char ch[20];
    printf("enter name\n");
    gets(ch);
    puts(ch);
    printf("the name is %s",ch);
    return 0;
}