#include <stdio.h>


int main()
{
    int n;

    float temp, sqrt;
    printf("n = ");
    scanf("%d", &n);
    sqrt = n / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( n/temp + temp) / 2;
    }

    printf("sqrt = %.2f\n", sqrt);
}
