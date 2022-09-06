#include<stdio.h>

int secondMax(const int*, size_t, int*);

int main()
{
    int sm = 0;
    int arr[] = {12, 34, 5, 70, 46};
    secondMax(arr, 5, &sm);
    printf("second max = %d\n", sm);

    return 0;
}

int secondMax(const int* arr, size_t n, int* secondMax)
{
    int maxElemIndex = 0, secondMaxIndex = -1;

    if(n == 0){
        printf("The array is empty!\n");
        return -1;
    }
    else if(n == 1){
        printf("The array has only one element!\n");
        return -1;
    }

    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxElemIndex])
            maxElemIndex = i;
    }
 
    for (int i = 0; i < n; ++i) {
        if (arr[i] != arr[maxElemIndex]) {

            if (secondMaxIndex == -1){
                secondMaxIndex = i;
            }
            else if (arr[i] > arr[secondMaxIndex]){
                secondMaxIndex = i;
            }
        }
    }
    if(secondMaxIndex == -1)
    {
        printf("All the elements are equal!\n");
        return -1;
    }
    *secondMax = arr[secondMaxIndex];
    return *secondMax;
}
