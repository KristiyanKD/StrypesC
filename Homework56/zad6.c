#include<stdio.h>

#define SWAP(a, b) (a^=b^=a^=b)

void Bubble(int* pArray, unsigned uLen)
{
    for(int i = 0; i < uLen - 1; ++i)
    {
        for(int j = 0; j < uLen - i - 1; ++j)
        {
            if(pArray[j] > pArray[j + 1])
            {
                SWAP(pArray[j], pArray[j + 1]);
            }
        }        
    }
}

int main()
{
    int arr[] = {8, 78, -1, -327, 27, 100, 2};
    unsigned arrLen = sizeof(arr) / sizeof(arr[0]);

    Bubble(arr, arrLen);
    
    for(int j = 0; j < arrLen; ++j)
    {
        printf("%d ", arr[j]);
    } 
    printf("\n");

    return 0;
}