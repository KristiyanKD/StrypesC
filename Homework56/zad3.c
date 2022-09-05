#include<stdio.h>

#define SIZE 8
//return the value ot the bit
#define CHECKBIT(mask, bit) (!!(mask & (1ull << bit)))
//swap the value of the bit between 0 and 1
#define REVERSEBIT(mask, bit) (mask ^= (1ull << bit))

void VMirror(unsigned char* pImage)
{
    for(int i = 0; i < SIZE; ++i)
    {
        for(int j = 0; j < SIZE / 2; ++j)
        {
            //swap their values only if they are different
            if(CHECKBIT(pImage[i], j) != CHECKBIT(pImage[i], SIZE - 1 - j))
            {
                REVERSEBIT(pImage[i], j);
                REVERSEBIT(pImage[i], SIZE - 1 - j);
            }
        }
    }
}

int main()
{
    unsigned char ar[SIZE] = {0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00};
    
    VMirror(ar);

    for(int i = 0; i < SIZE; ++i)
    {
        printf("0x%.2X", ar[i]);
        //because I do not want comma after the last element
        if(i < SIZE - 1){
            printf(", ");
        }
    }
    putchar('\n');


    return 0;
}