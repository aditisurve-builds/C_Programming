#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1 , int iNo2)
{
   if(iNo1 > iNo2)
    {
        printf("The number is Maximum :%d \n",iNo1);
    }
    else
    {
        printf("The number is Maximum :%d \n" ,iNo2);
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    Maximum(iValue1 , iValue2);

    return EXIT_SUCCESS;
}