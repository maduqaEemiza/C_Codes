#include<stdio.h>
//iterative method
/*int agechk(int age){

    for(int i;age<18;i++){
        // int num;
        printf("You cant drive. Try again!\n");
        printf("Enter age again: ");
        scanf("%d",&age);
        
    }
    if (age>=18)
    {
        printf("You can drive");
        return 0;
    }
    
}*/

//recursive approach
int agechk(int age){
    if (age>=18)
    {
        printf("You can drive!");
    }
    
    else{
        printf("ENTER AGAIN: \n");
        scanf("%d",&age);
        agechk(age);
    }
    return 0;
}


int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);

    agechk(age);



    return 0;
}