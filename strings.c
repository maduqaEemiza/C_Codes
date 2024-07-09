#include<stdio.h>
#include<string.h>


int main()
{
    char s1[] = "mathematics";
    char s2[] = "physics";
    char s3[20];

    puts(s1);
    puts(s2);

    //puts(strcat(s1,s2)); //this command will actually concatinate s1 & s2 into s1, and here on s1 string is changed to the concatinated string
    
    printf("The length of the string s1 is : %d\n",strlen(s1));
    printf("The length of the string s2 is : %d\n",strlen(s2));

    //strrev() also changes the original string to it's reversed string
    // this is happening cuz by passing the string name we are actually passing address of the character array
    printf("The reversed string s1 is : %s\n",strrev(s1));
    printf("The reversed string s1 is : %s\n",strrev(s2));

    //to reverse it back to original string
    strrev(s1);
    strrev(s2);

    //strcpy() copies second string to the first one
    strcpy(s3,strcat(s1,s2));
    puts(s3);

    printf("Comparing s1 and s2: %d\n",strcmp(s3,s2));
    printf("Comparing s1 and s3: %d\n",strcmp(s1,s2));

    strcat(s1,s2);
    


    return 0;
}