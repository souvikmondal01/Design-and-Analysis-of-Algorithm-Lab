#include<stdio.h>

void merge(int a[], int i, int mid, int j)
{
    int l = i;
    int r = mid+1;
    int k = i;
    int b[50];

    while(l<=mid && r <= j)
    {
        if(a[l] < a[r])
        {
            b[k] = a[l];
            l++;

        }else
        {
            b[k] = a[r];
            r++;
        }
        k++;
    }
    if(l>mid)
    {
        while(r<=j)
        {
            b[k] = a[r];
            k++;
            r++;
        }
    }else
    {
        while(l<=mid)
        {
            b[k] = a[l];
            k++;
            l++;
        }
    }

    for(k=i;k<= j;k++)
    {
        a[k] = b[k];
    }

}

void mergeSort(int a[],int i, int j)
{
    if(i<j)
    {
        int mid = (i+j)/2;
        mergeSort(a,i,mid);
        mergeSort(a,mid+1,j);
        merge(a,i,mid,j);
    }
}

int main(){
    int num,x;
    int a[50];
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    printf("Enter the elements:\n");
    for(x = 0;x<num;x++)
    {
        scanf("%d",&a[x]);
    }

    mergeSort(a,0,num-1);

    printf("Array after sorting:\n");
    for(x = 0;x<num;x++)
    {
        printf("%d  ",a[x]);
    }
    

    return 0;
}