#include<stdio.h>
#include<string.h>

union emp{
    int id;
    char dept;
    char name[20];
}e1,e2,e3;
int main()
{
    e1.id=101;
    e1.dept='A';
    strcpy(e1.name,"Jeff"); // name is allocated the memory
    
    printf("%d\n",e1.id);
    printf("%c\n",e1.dept);
    printf("%s\n",e1.name);

    e2.id=202;
    strcpy(e2.name,"Eric");
    e2.dept='B'; // department is allocated memory
    
    printf("%d\n",e2.id);
    printf("%c\n",e2.dept);
    printf("%s\n",e2.name);

    e3.dept='C';
    strcpy(e3.name,"Cloe");
    e3.id=303;// id is allocted memory

    printf("%d\n",e3.id);
    printf("%c\n",e3.dept);
    printf("%s\n",e3.name);

    //Union can be used like structures but only one member will be allocated memory at a time

    return 0;
}