#include<stdio.h>



int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=(sizeof(arr))/4;
    //My solution
    for (int i = 0; i < size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }
    
    for (int i = 0; i < size ;i++)
    {
        printf("%d ",*(arr+i));
    }
    
   


    return 0;
}