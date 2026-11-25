#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    printf("Elements of array are: \n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }
}
int main()
{
    int *ptr = NULL;
    int iSize = 0,iCnt=0;

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

    Display(ptr,iSize);
        
    //step 3: free memory
    free(ptr);
    
    return EXIT_SUCCESS;
}