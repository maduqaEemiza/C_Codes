#include <stdio.h>

int main()
{
    int arr[4];     //declaring array
    //entering the elements to the array
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %dth element of the array:\n", i);
        scanf("%d", &arr[i]);
    }
    //printing the elements of the array
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    return 0;
}