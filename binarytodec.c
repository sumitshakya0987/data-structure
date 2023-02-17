#include<stdio.h>
#include<math.h>
void main(){
   printf("sumit shakyaIT-C 2100320130173\n");
    int n;
    printf("Enter number in binary\n");
    scanf("%d",&n);
    int p=0,sum=0;
    while(n>0){
        int k=n%10;
        if(k==1){
            sum=sum+pow(2,p);
        }
        p++;
        n=n/10;
    }
    printf("%d",sum);
}