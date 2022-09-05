#include<stdio.h>

void Reverse(char* ptr)
{
    int len = 0;
    
    //find the length of the char array
    while(ptr[len] != '\0'){
        ++len;
    }

    for(int i = 0; i < (len / 2); ++i){
        //swap the characters
        ptr[i] ^= ptr[len-i-1] ^= ptr[i] ^= ptr[len-i-1];
    }
    return;
}

int main()
{
    char str[] = "This is a test!";
    printf("string before: %s\n", str);
    Reverse(str);
    printf("string after: %s\n", str);

    return 0;
}