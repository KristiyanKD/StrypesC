#include "zad1.h"

char randLettersInterval(const char first, const char second)
{
    return rand() % (second - first) + first;
}

void printArray(const char* arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%c ", arr[i]);
    }
    putchar('\n');
}

unsigned int smallLetters(const char* arr, size_t size)
{
    unsigned int count = 0;
    while(arr[count] >= 'a' && arr[count] <= 'z')
    {
        count++;
    }
    return count;
}

char mostCommonSymbol(const char* arr, size_t size)
{
    unsigned int occurrences;
    unsigned int mostUsedSymbolCount = 0;
    char mostUsedSymbol;
    for(int i = 0; i < size - 1; ++i)
    {
        occurrences = 1;
        for(int j = i + 1; j < size; ++j)
        {
            if( arr[i] == arr[j])
            {
                occurrences++;
            }
        }   
        if(occurrences > mostUsedSymbolCount)
        {
            mostUsedSymbolCount = occurrences;
            mostUsedSymbol = arr[i];
        }
    }
    printf("symbol \'%c\' met %u times\n", mostUsedSymbol, mostUsedSymbolCount);
    return mostUsedSymbol;
}
