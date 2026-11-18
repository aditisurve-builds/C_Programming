#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;    // break word indicates tht go out of loop 
        }
    }

    if(iCnt == (iNo/2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}

int main(void)
{  
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is a Prime Number");
    }
    else
    {
        printf("It is not a Prime Number");
    }
    
    return EXIT_SUCCESS;
}
