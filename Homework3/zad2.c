#include<stdio.h>

unsigned digitsSum(int);
unsigned sumArrayDigits(const int*, size_t);


int main()
{
    int arr[]={19, 28, 64, 55, 4, 6, 37};
    printf("sum = %d\n", sumArrayDigits(arr, 7));
    
    return 0;
}

unsigned digitsSum(int n)
{
    if(n < 10){
        return n;
    }
    unsigned sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

unsigned sumArrayDigits(const int* arr, size_t n)
{
    unsigned sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += digitsSum(*(arr + i));
    }
    return sum;
}
