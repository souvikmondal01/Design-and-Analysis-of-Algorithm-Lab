#include<stdio.h>

int partition(int arr[],int l, int r){
    int pivot,i,j,temp;
    pivot = arr[r];
    i = l-1;
    for(j=l;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;

    return i+1;
}

void quickSort(int arr[],int l, int r){
    if(l<r){
        int p = partition(arr,l,r);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,r);
    }
}

int main(){
    int num,i;
    int arr[50];
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    printf("Enter the elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,num-1);
    printf("After sorting the array:\n");
    for(i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}