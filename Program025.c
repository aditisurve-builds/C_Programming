#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];     //its a String 

    printf("Enter your Name: \n");
    scanf("%s",sName);        // no need to write & as not needed in sting as string name is itself the address

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}