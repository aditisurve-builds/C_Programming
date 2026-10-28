#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>    /*as boolean is not in C ,in C data type so we called it thru Header file,
                        boolean is written as boolean the boolean data type is in C++*/

bool CheckEven(int iNo)
{
    if((iNo % 2 == 0))
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
    bool bRet = false;    // as for int i = 0 so like wise in boolean true = 1 nd false = 0 so we wrote false == 0

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet== true)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }

    return EXIT_SUCCESS;
}