#include<stdio.h>
//Iterative is fatser than Recurcive


int main()
{
    int num;
    int a=1,b=1,c;
    printf("Enter the number:\n");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("1");
        return 0;
    }
    
    else
    {
        for (int i = 1; i < (num);i++)
        {
            

            if (i==1)
            {
                c=a+b;
                continue;   //wouldnt matter cuz it's an if-else statement, it's anyways not going to execute else statement
            }
            else
            {
                a=b;
                b=c;
                c= a+b;
                
            }
            
            

            
        }
        printf("%d",c);
        
    }
    



    return 0;
}