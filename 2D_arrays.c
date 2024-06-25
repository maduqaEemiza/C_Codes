#include<stdio.h>



int main()
{
    int arr[2][4];

    //taking user input
    for (int i = 0; i < 2; i++)
    {   
        printf("Enter elements of row %d:\n",i+1);
        for (int j = 0; j < 4; j++)

        {
            if(j!=0){
                printf("NEXT: ");
            }
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    //printing the array
    printf("\n\n\nHere's the array:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",arr[i][j]);
            
        }
        printf("\n");
        
    }
    

    return 0;
}