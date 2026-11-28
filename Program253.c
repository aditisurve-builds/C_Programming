#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)    // Or (char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 97) ||(*str == 98)||(*str == 99)||(*str == 100))   /* Ascii Value   should never write i code  ,, 
                                                                        wrote just for exmaple how it works*/
        {
             iCount++;
        }
        str++;
    }
    

    return iCount;
}
int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountX(Arr);

    printf("Frequency : %d\n",iRet);
    
    return EXIT_SUCCESS;
}