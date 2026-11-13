#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iSum = iSum + iCnt; 
    }

    return iSum;   // as it returns some value thts y in main function we wrote iRet nd then printf                                                 to print iRet
}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue); 

    printf("Summation is: %d \n", iRet);

    return EXIT_SUCCESS;
}