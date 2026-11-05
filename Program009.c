#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
// 
//  Function Name    : Addition
//  Input             : Integer,Integer
//  Output            : Integer
//  Description       : Performs addition
//  Date              : 09/10/26 
//  Author            : Aditi Vijaykumar Surve 
//
/////////////////////////////////////////////////////////////////////

int Addition(  
    
                 int iNo1 ,     //First Input
                 int iNo2       //Second Input
            
            )  
{
    int iAns = 0;

    iAns = iNo1 + iNo2;    //Business Logic

    return iAns;
}

/////////////////////////////////////////////////////////////////////////
//
// Entry Point of this Application
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter first Number :\n");
    scanf("%d",&iValue1);

    printf("Enter second Number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1 , iValue2);  

    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Step 5 - Test the program
// 
//          Tested the Test Cases:
//              
//          Input 1       Input 2          Output   
//             10           11                21
//             20           -9                11      
//            -11           -8                -19
///////////////////////////////////////////////////////////////////