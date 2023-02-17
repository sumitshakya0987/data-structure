#include<stdio.h>
void main(){
   printf("sumit shakya IT-C 2100320130173\n");
    int n,key;
    printf("Enter number of terms:\n");;
    scanf("%d",&n);
    int A[n];
    printf("Enter array elements in ascending order:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("enter key:");
    scanf("%d",&key);
    int begin=0;
    int end=n-1;
    int mid;
    while(begin<end){
        mid=(end+begin)/2;
        if(A[mid]==key){
            printf("Key found at index: %d",mid);
            break;
        }
        else if(A[mid]>key){
            end=mid-1;
        }
        else if(A[mid]<key){
            begin=mid+1;
        }
    }

}
