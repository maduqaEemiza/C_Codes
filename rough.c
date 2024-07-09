#include <stdio.h>
#include <string.h>


int main() {

   char destination[50] = "Hello, ";
   char name[] = "World!";

   // Using sprintf() to concatenate 'name' to 'destination'
   sprintf(destination + strlen(destination), "%s", name);

    printf("%s\n", destination);
    return 0;
}