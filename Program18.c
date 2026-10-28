#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2 == 0))
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}