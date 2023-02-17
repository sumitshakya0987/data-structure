#include<stdio.h>
void main(){
    printf("sumit shakya IT-C 2100320130173\n");
    int n,key;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(A[i]==key){
            printf("key found at index %d",i);
        }
    }
}