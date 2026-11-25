#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enetr number of elements you want: \n");
    scanf("%d",&iSize);

    //step  1 : allocate memory
    ptr = (int *)malloc(sizeof(int)*iSize);

    //step  2: use memory

    //step 3: free memory
    free(ptr);
    
    return EXIT_SUCCESS;
}