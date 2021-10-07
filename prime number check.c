 #include<stdio.h>
int main(){
int num,i,c=0;
printf("enter number:\n");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
    if (num%i==0)
    {
        c=c+1;
    }
}

if (c==0){
    printf("prime number");
    }
else{
    printf("Not prime number");
    }
return 0;
}

