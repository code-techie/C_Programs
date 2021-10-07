 #include<stdio.h>
int main(){
    struct book{
        char name[20];
         float price;
         int pages;
     };

struct book b1 ={"Wings of Fire",200,1000};
struct book b2 ={"Alchemist",500,700};
printf("book name is: %s price: %f and pages: %d\n",b1.name,b1.price,b1.pages);
printf("book name is: %s price: %f and pages: %d",b2.name,b2.price,b2.pages);

}



