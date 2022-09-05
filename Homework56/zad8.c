#include <stdio.h>
#include <stdlib.h>


void Add(const char* p1, const char* p2, char* result)
{
    int sum = atoi(p1) + atoi(p2);
    //num is used to count the number of digits 
    int num = sum;
    int size = 0;

    char isNegative = 0;
    if(sum < 0)
    {
        isNegative = 1;
        sum *= -1;
    }

    while(num != 0)
    {
        size++;
        num /= 10;
    }
    
    if(isNegative)
    {
        ++size;
    }

    for( ; size >= 0; size--)
    {
        result[size - 1] = sum % 10 + '0';
        sum /= 10;
    }
    if(isNegative)
    {
        result[0] = '-';
    }

    return;
}

//program works with both positive and negative numbers
int main()
{
    char arr[10];
    Add("-32", "2", arr);
    printf("%s\n", arr);
    

    return 0;
}