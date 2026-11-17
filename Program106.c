#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("It is perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)
// A Perfect number is a positive integer that equals the sum of its proper positive divisors, excluding the number itself
//  6: Proper divisors are 1, 2, and 3 (1 + 2 + 3 = 6). 
// 28: Proper divisors are 1, 2, 4, 7, and 14 (1 + 2 + 4 + 7 + 14 = 28).