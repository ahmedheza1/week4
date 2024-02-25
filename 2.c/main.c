#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Please enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second=arr[0];
    for (i=1 ; i<n ; i++)
    {
        if( arr[i]>max )
        {
            second=max;
            max = arr[i];
        }
        else if(arr[i]>second && arr[i]!= max)
        {
            second= arr[i];
        }
    }
    printf("The second number in the array is: %d",second);
    return 0;
}
