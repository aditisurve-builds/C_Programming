#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    for(iCnt = 1 , iFact = 1; iCnt <= iNo; iCnt++)
    {
       iFact = iFact * iCnt; 
    }

    return iFact;                                           
}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d",&iValue);             // as when user enters 20 then 20 factorial the output gives negative value as it exceeds the sie of int 
                                           thts y in next code i used long int nd long long  it stores large size//
    iRet = Factorial(iValue); 

    printf("Factorial is: %d \n", iRet);

    return EXIT_SUCCESS;
}