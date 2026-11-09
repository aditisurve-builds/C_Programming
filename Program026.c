#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];     //its a String 

    printf("Enter your Name :\n");
    scanf("%[^'\n']s",sName);        // no need to write & as not needed in string as string name is itself the base address

    printf("Welcome %s\n",sName);        /*^['\n'] - Accept the sring form user until the user enters the name 
                                                             it maybe of any number character (String) */

    return EXIT_SUCCESS;
}