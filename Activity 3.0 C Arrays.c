#include <stdio.h>
int main()
{
   int arr[5],i,n=5,sum=0,average;
   int length=sizeof(arr)/sizeof (arr[0]);

   printf("Enter the size of the Array: ");
   scanf("%d", &arr);

   for(i=0; i<n; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
   }

   for(int i=0; i<length; i++){
    sum=sum+arr[i];
   }
   printf("Sum of all elements of an Array: %d", sum);

   return 0;
}
