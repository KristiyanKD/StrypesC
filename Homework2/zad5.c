#include<stdio.h>
#include<stdint.h>

unsigned onesCount(const uint64_t mask)
{
    unsigned count = 0;
    for (int i = 0; i < 64; ++i)
    {
        if(mask & (1ull << i))
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
    printf("1's count: %d\n", onesCount(num));

    return 0;
}
