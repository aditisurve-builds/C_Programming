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
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }

    printf("Enter second Number :\n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1 , iValue2);  

    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
}
