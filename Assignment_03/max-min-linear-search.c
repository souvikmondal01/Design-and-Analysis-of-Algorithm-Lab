#include<stdio.h>
int max,min;
int arr[50];
void maxMin(int n)
{
    int i;
    max = arr[0];
    min = arr[0];
    for(i = 0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
            
    }
}

int main(){
    int num,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);

    printf("Enter the elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    maxMin(num);

    printf("Max: %d\n",max);
    printf("Min: %d\n",min);

    return 0;
}
