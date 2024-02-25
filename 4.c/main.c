#include <stdio.h>
#include <stdlib.h>

int repeat();
int main()
{
    int arr[6]={2,4,8,2,8,9};
    printf("The repeating number is: %d ",repeat(arr));
    return 0;
}
 int repeat(int arr[])
{
    int i, j;
    for(i=0 ; i<6 ; i++)
    {
        for(j=i+1 ; j<6 ; j++)
        {
            if(arr[i]==arr[j])
                return arr[i];
        }
    }
}
