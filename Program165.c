/*
48967

odd - 7
even - 6
odd- 9
even - 8
even - 4
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{  
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("Even : %d \n",iDigit);
        }
        else
        {
            printf("Odd is %d \n",iDigit);
        }
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}