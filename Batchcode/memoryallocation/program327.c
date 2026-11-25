#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
        

    }
    return iSum;
}
int main()
{
    int *ptr = NULL;
    int iSize = 0,iCnt=0;
    int iRet = 0;

    printf("Enetr number of elements you want: \n");
    scanf("%d",&iSize);

    //step  1 : allocate memory
    ptr = (int *)malloc(sizeof(int)*iSize);

    //step  2: use memory
    printf("Enter the elements: \n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =  Sumation(ptr,iSize);

    printf("addition of all elment: %d\n",iRet);
        
    //step 3: free memory
    free(ptr);
    
    return EXIT_SUCCESS;
}