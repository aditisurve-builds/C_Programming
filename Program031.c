#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30]; //its a String 
    int iAge = 0;
    float fMarks = 0.0f; 
        
    printf("Enter your Name :\n");
    scanf("%[^'\n']s",sName);        // no need to write & as not needed in string as string name is itself the base address
    
    printf("Enter your Age : \n");
    scanf(" %d",&iAge);               //space before format specifier clears the previous data  

    printf("Enter your Marks : \n");
    scanf("%f",&fMarks);


    printf("Welcome %s\n",sName);  
    printf("Your Age is : %d \n",iAge);
    printf("Your Marks is : %f \n",fMarks);      
      

    return EXIT_SUCCESS;
}