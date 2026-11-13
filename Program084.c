#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0 )
    {
        printf("The number is divisible by 5\n");
    }
    else
    {
        printf("The number is not divisible by 5\n");
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