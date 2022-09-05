#include <stdio.h>

unsigned char CheckBit(unsigned int uValue)
{
    while(1)
    {
        if(uValue == 0){
            return '0';
        }
        //shifts until zeroth bit is 1
        //if the number has become 1 => true
        //if the number is not 1 it has more 1's bits => false
        if(uValue & 1)
        {
            if(uValue == 1){
                return '1';
            }
            else{
                return '0';
            }
        }
        else{
            uValue >>= 1;
        }
    }
}

int main()
{
    printf("0x0%c\n", CheckBit(0x040));

    return 0;
}
