#include <stdio.h>
#include <stdint.h>

//because of the string format
#define STRING_SIZE 6

void Conv(int sValue, char* pBuffer)
{
    if(sValue < 0){
        pBuffer[0] = '-';
        sValue *= -1;
    }
    int s = STRING_SIZE - 1;
    while(sValue != 0)
    {
        pBuffer[s--] = sValue % 10 + '0';
        sValue /= 10;
    }
    //fill the blank position with spaces
    for( ; s > 0; --s){
        pBuffer[s] = ' ';
    }
    return;
}

int main()
{
    char arr[STRING_SIZE + 1];
    //clear positions if they are terminated
    for(int i = 0; i < STRING_SIZE; ++i){
        arr[i] = ' ';
    }
    arr[STRING_SIZE] = '\0';
    
    int16_t n;
    printf("enter number: ");
    scanf("%hd", &n);

    Conv(n, arr);
    
    printf("number is \'%s\'\n",arr);

    return 0;
}