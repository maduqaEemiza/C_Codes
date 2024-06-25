#include<stdio.h>
#include<conio.h>


int main()
{
    int age;
    printf("Your age?\n");

    scanf("%d",&age);
    printf("You have entered: %d\n",age);

    if (age>=18)
    {
        printf("you can vote!");
    }
    else if (age>=3)
    {
        printf("you cant vote!");
    }
    else if (age>12)
    {
        printf("you cant vote still a teen!");
    }
    else
    {
        printf("Yu entered something wrong");
    }
    




}