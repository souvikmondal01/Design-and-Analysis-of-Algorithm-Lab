#include <stdio.h>
int main(){
int arr[20],i,n,x,low,high,mid;

printf("Enter the elements of the array: ");
scanf("%d",&n);

printf("Enter the elements of the array: \n");
for(i = 0; i < n; i++)
scanf("%d",&arr[i]);

printf("Enter element to search: ");
scanf("%d", &x);

low = 0;
high = n - 1;
mid = (low+high)/2;

while (low <= high){
if(arr[mid] < x)
low = mid + 1;
else if (arr[mid] == x){
printf("Element found at location: %d",mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}

if(low > high)
printf("Element not found!!!");

return 0;
}