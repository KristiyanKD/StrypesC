#include <stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue)
{
    int begin = 0, end = uArraySize - 1;
    while(begin <= end)
    {
        int mid = begin + (end - begin) / 2;
        if(pArray[mid] == uValue)
        {
            return mid;
        }
        else if(uValue < pArray[mid])
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
        }
    }
    return -1;
}
 
int main()
{
    unsigned arr[]={3, 7, 9, 11, 18, 19, 21, 23, 25, 39, 40};
    unsigned size = sizeof(arr) / sizeof(arr[0]);

    //print the elements with their index
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] - %d\n", i, arr[i]);
    }

    int num;
    printf("number = ");
    scanf("%d", &num);

    printf("id of %d is %d\n", num, BinSearch(arr, size, num));
    
    
 
    return 0;
}
