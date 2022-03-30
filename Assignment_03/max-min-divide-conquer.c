#include<stdio.h>

int arr[50];
int max,min;
void maxMin(int i, int j)
{
    int max1, min1,mid;
    if(i==j)
    {
        max = min = arr[i];
    }
    else 
    {
        if(i==j-1)
        {
            if(arr[i]>arr[j])
            {
                max = arr[i];
                min = arr[j];
            }
            else
            {
                max = arr[j];
                min = arr[i];
            }
        }
        else
        {
            mid = (i+j)/2;
            maxMin(i,mid);
            max1 = max;
            min1 = min;
            maxMin(mid+1,j);
            if(max<max1)
            {
                max = max1;
            }
            if(min>min1)
            {
                min = min1;
            }
        }
    }
}


int main(){
    int i,num;
    printf("Enter the total number of elements:\n");
    scanf("%d",&num);
    printf("Enter elements:\n");
    for ( i = 1; i <= num; i++)
        scanf("%d",&arr[i]);

    max = arr[0];
    min = arr[0];
    maxMin(1,num);
    printf("Max: %d\n",max);
    printf("Min: %d",min);
    return 0;
}