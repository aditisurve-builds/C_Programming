// self code next one proper code
#include<stdio.h>
#include<stdlib.h>

float AvgDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iNo = iNo % 10;
        iCount++;
        iSum = (iSum + iDigit ) / iCount;
    }
        iNo = iNo/10;
         return iSum;

}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    fRet = AvgDigits(iValue);

    printf("Avg of digits is : %f \n ",fRet);

    return EXIT_SUCCESS;
}