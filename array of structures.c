 #include<stdio.h>
int main(){
    struct book{
        char name[20];
         float price;
         int pages;
     };
     struct book b[3];
     int i;
     printf("enter book details:\n");
     for (i=0;i<3;i++){
         scanf("%s%f%d",b[i].name,&b[i].price,&b[i].pages);   // don't add names in scanf-->generates error
     }
          for (i=0;i<3;i++){
         printf(" %s price %f pages %d",b[i].name,b[i].price,b[i].pages);
     }
     return 0;
}
