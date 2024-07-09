#include<stdio.h>
#include<string.h>

void concat(char dest[],const char str[], int destSize);


int main()
{   
    char s1[] = "Hello";
    char s2[] = "World!!";
    char destination[100]="Dancing with ";
    char middle[]="the shadow talking ";
    char end[]="to the soul";
    char str[20];
    float pi = 31.141592;
    //strcat() can be used only for two strings

    //strncat
    // puts(strncat(s1,s2,4)); //concatinates upto 4 char from the second string

    //sprintf() method, very useful in type casting

    sprintf(str,"%f",pi);

    //loop method
    
    // concat(destination,middle,sizeof(destination));
     printf("%s\n",str);
    
   
    
    return 0;
}

void concat(char dest[],const char str[], int destSize){
    int i=0;
    while (dest[i]!='\0')
    {
        i++;
    }
    int j=0;
    while (str[j]!='\0' && i<(destSize-1))
    {
        dest[i]=str[j];
        j++;
        i++;
    }
    dest[i]='\0';
    
}