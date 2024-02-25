#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Please enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        a[i]=0;
    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]==0)
        {
            printf("%d ",arr[i]);
        }
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i]=arr[j])
            {
                arr[j]=1;
            }
        }
    }
    return 0;
}
