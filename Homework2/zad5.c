#include<stdio.h>
#include<stdint.h>

unsigned onesCount(uint64_t mask)
{
    unsigned count = 0;
    for (int i = 0; i < 64; ++i)
    {
        if(mask & (1<<i))
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    uint64_t num;
    printf("n = ");
    scanf("%lu", &num);
    //do not know why but mask contains 2 times more 1's bits than expected
    printf("1's count: %d\n",onesCount(num)/2);
    // I am able to see them with this loop
    for (int i = 63; i >= 0 ; --i)
    {
        printf("%d", num&(1<<i)?1:0);
    
    }
    printf("\n");

    return 0;
}