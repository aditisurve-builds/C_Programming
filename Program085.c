/*
         -----------------------------------------------
                         Operation &&
        ------------------------------------------------
        Result1             Result2             Result3
        ------------------------------------------------
          TRUE              TRUE                  TRUE
          TRUE              FALSE                 FALSE
          FALSE             TRUE                  FALSE    /* Short Circuit
          FALSE             FALSE                 FALSE       Short Circuit */
          -----------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)                               // Helper Function where the logic is written 
{
    if((iNo % 3) == 0 && (iNo % 5) == 0)
    {
        printf("The number is divisible by 3 and 5 \n");
    }
    else
    {
        printf("The number is not divisible by 3 and 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}