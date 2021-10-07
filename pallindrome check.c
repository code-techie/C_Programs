 #include<stdio.h>
 #include<string.h>
int main(){
    char s1[20],s2[20];
    printf("enter a string:");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
if (strcmp(s1,s2)==0){
    printf("string is pallindrome");
}else{
    printf("string is not pallindrome");
}
return 0;
}
