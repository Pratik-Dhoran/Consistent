#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto int iMin = Arr[0] ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin ;

}

int main()
{
    auto int iCount =0 ;
    auto int *ptr = NULL ;
    auto int iCnt = 0 ;
    auto int iRet = 0 ;

    printf("Enter Number of elements you want to enter :");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));
    printf("Dyanamic memory gets allocated.\n");

    printf("Enter the Elements :\n");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        printf("Enter the %d Number : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr,iCount);

    printf("The Lowest Element is = %d \n", iRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}