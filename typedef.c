#include<stdio.h>

typedef struct student
{
    int marks;
} stud; //stud becomes the alias for the new structure



int main()
{
    typedef unsigned long ul; //'ul' is the allias
    ul l1,l2,l3;

    stud s1; // becomes short and easy to use
    s1.marks = 45;
    printf("%d",s1.marks);



    return 0;
}