#include<stdio.h>
int main(){
    int arr[20],i,n,x;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(arr[i]==x)
        break;
    }

    if(i<n){
        printf("Element found at location: %d",i+1);
    }else{
        printf("Element not found!!!");
    }
    
    return 0;
}