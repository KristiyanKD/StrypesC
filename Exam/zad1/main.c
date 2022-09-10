#include "zad1.h"

#define SYMBOLS_SIZE 7
const char const symbols[SYMBOLS_SIZE] = {'!', '?', '$', '@', '*', '%', '-'};

int main()
{
    //to have different rand values
    srand(time(NULL));

    unsigned int n, m, k, arrSize = 0;
    printf("n = ");
    scanf("%u", &n);
    arrSize += n;

    char* arr = malloc(arrSize * sizeof(char));
    if(arr == NULL)
    {
        fprintf(stderr, "Memory allocation problem!\n");
        return 1;
    }

    int i = 0;
    for( ; i < arrSize; ++i)
    {
        arr[i] = randLettersInterval('a', 'z' + 1);
    }

    printf("m = ");
    scanf("%u", &m);
    arrSize += m;

    arr = realloc(arr, arrSize * sizeof(char));
    if(arr == NULL)
    {
        fprintf(stderr, "Memory allocation problem!\n");
        return 1;
    }

    for( ; i < arrSize; ++i)
    {
        arr[i] = randLettersInterval('A', 'Z' + 1);
    }

    printf("k = ");
    scanf("%u", &k);
    arrSize += k;

    //arrSize + 1 because '\0'
    arr = realloc(arr, (arrSize + 1) * sizeof(char));
    if(arr == NULL)
    {
        fprintf(stderr, "Memory allocation problem!\n");
        return 1;
    }

    for( ; i < arrSize; ++i)
    {
        arr[i] = symbols[randLettersInterval(0, SYMBOLS_SIZE)];
    }

    arr[arrSize] = '\0';

    printArray(arr, arrSize);
    printf("small leters count: %u\n", smallLetters(arr, arrSize));
    mostCommonSymbol(arr, arrSize);


    free(arr);

    return 0;
}