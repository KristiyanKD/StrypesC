#include <stdio.h>

unsigned int digitsSum(unsigned int);
unsigned int sumArrayDigits(const unsigned int*, size_t);


int main()
{
    unsigned int arr[]={1, 5, 82, 4, 13321};
    unsigned int elemCount = sizeof(arr) / sizeof(arr[0]);

    printf("sum = %d\n", sumArrayDigits(arr, elemCount));
    
    return 0;
}

unsigned int digitsSum(unsigned int number)
{
    if(number < 10){
        return number;
    }
    unsigned int sum = 0;
    while(number != 0)
    {
        sum += (number % 10);
        number /= 10;
    }
    return sum;
}

unsigned sumArrayDigits(const unsigned int* arr, size_t num)
{
    unsigned int sum = 0;
    for(int i = 0; i < num; ++i)
    {
        sum += digitsSum(arr[i]);
    }
    return sum;
}