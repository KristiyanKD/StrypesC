#include<stdio.h>

#define MAX(x, y, z) ((x) >= (y)) ? ((x) >= (z) ? (x) : (z)) : ((y) >= (z) ? (y) : (z))
#define MIN(x, y, z) ((x) <= (y)) ? ((x) <= (z) ? (x) : (z)) : ((y) <= (z) ? (y) : (z))
#define SETBIT(mask, bit) ((mask) |= (1ull << (bit)))
#define CLEARBIT(mask, bit) ((mask) &= ~(1ull << (bit)))
#define INVERSEBIT(mask, bit) ((mask) ^= (1ull << (bit)))
#define CHECKBIT(mask, bit) !!((mask) & (1ull << (bit)))
#define SWAP(x, y) ((a) ^= (b) ^= (a) ^= (b))


int main()
{

    printf("Max: %d\n", MAX(3, 4, 5));
    printf("Min: %d\n", MIN(3, 1, 3));
    int a = 3, b = 4;
    printf("before swap : a = %d b = %d\n", a, b);
    SWAP(a, b);
    printf("after swap : a = %d b = %d\n", a, b);
    a = 0;
    printf("a = %d\n", a);
    SETBIT(a, 0);
    SETBIT(a, 1);
    SETBIT(a, 2);
    SETBIT(a, 3);
    printf("a = %d\n", a);
    CLEARBIT(a, 2);
    printf("a = %d\n", a);
    INVERSEBIT(a, 2);
    printf("a = %d\n", a);
    printf("third bit: %d fourth bit: %d\n", CHECKBIT(a, 3), CHECKBIT(a, 4));

    return 0;
}
