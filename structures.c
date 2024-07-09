#include <stdio.h>
#include <string.h>

struct stud
{
    char name[20];
    int marks;
    char fav_char;

} s1; // Declaring the vasriable with the structure defination

int main()
{

    // Initiating the structure memebers
    s1.marks = 590;
    strcpy(s1.name, "Zeen");
    s1.fav_char = 'f';

    printf("%s\n", s1.name);
    printf("%d\n", s1.marks);
    printf("%c\n", s1.fav_char);

    // Another way to declare a structure variable
    struct stud s2;
    s2.marks = 165;
    strcpy(s2.name, "Qdam");
    s2.fav_char = 'a';

    printf("%s\n", s2.name);
    printf("%d\n", s2.marks);
    printf("%c\n", s2.fav_char);

    // Another way to initiate values to a structure variable

    struct stud s3 = {"albert", 200, 'k'};

    printf("%s\n", s3.name);
    printf("%d\n", s3.marks);
    printf("%c\n", s3.fav_char);

    // There's more to structures with structure nesting, structure pointers, padding and packing,....etc explore when needed.

    return 0;
}