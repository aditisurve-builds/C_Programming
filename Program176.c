// Input - 8998     display - 8998   palindrome

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0 ;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iNo )       // issue
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);
    
    if(bRet == true)
    {
       printf("Palindrome of  Number is :\n");     
    }
    else
    {
        printf("It is not Palindrome is :\n"); 
    }

    return EXIT_SUCCESS;
}