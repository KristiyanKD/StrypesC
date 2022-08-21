#include<stdio.h>

unsigned strlen(const char*);
unsigned strnlen(const char*, unsigned);
char* strcpy(char* dest, const char* str);
char* strncpy(char* dest, const char* str, unsigned n);
char* strcat(char* dest, const char* str);
char* strncat(char* dest, const char* str, unsigned n);
int strcmp (const char* str1, const char* str2);
int strncmp (const char* str1, const char* str2, unsigned n);
char* strstr(const char* str1, const char* str2);

int main()
{
    char* s = "Mercedes-Benz";
    char a[100];
    char* b = "-Benz";
    printf("str s: %s\n", s);
    printf("len of s: %d\n", strlen(s));
    printf("len of s: %d\n", strnlen(s, 8));
    printf("str a: %s\n", strcpy(a, s));
    printf("str a: %s\n", strncpy(a, s, 8));
    printf("str a concat with b: %s\n", strncat(a, b, 2));
    printf("str a concat with b: %s\n", strcat(a, b));

    char* x = "kk";
    char* y = "kkaaa";


    printf("comparison: %d\n", strcmp(x, y));
    printf("comparison N: %d\n", strncmp(x, y, 2));

    printf("a: %s\n", a);
    printf("contain: %s\n", strstr(a, "-B"));

    printf("contain: %s\n", strstr(a, "MB"));
    



    return 0;
}
unsigned strlen(const char* arr)
{
    unsigned size = 0;
    for(; arr[size]!='\0'; ++size){}
    return size;
}
unsigned strnlen(const char* arr, unsigned n)
{
    unsigned size = 0;
    for(; arr[size]!='\0' && size!=n; ++size){}
    return size;
}
char* strcpy(char* dest, const char* str)
{
    unsigned size = strlen(str);
    for(unsigned i=0; i<size; ++i)
    {
        dest[i] = str[i];
    }
    dest[size] = '\0';
    return dest;
}

char* strncpy(char* dest, const char* str, unsigned n)
{
    unsigned size = strlen(str);
    if(size>n){
        size=n;
    }
    for(unsigned i=0; i < size; ++i)
    {
        dest[i] = str[i];
    }
    dest[size] = '\0';
    return dest;
}
char* strcat(char* dest, const char* str)
{
    unsigned destSize = strlen(dest);
    unsigned strSize = strlen(str);

    for(unsigned i=0; i < strSize; ++i)
    {
        dest[destSize + i] = str[i];
    }
    dest[destSize+strSize] = '\0';
    return dest;
}
char* strncat(char* dest, const char* str, unsigned n)
{
    unsigned destSize = strlen(dest);
    unsigned strSize = strlen(str);

    if(strSize>n){
        strSize=n;
    }
    for(unsigned i=0; i < strSize; ++i)
    {
        dest[destSize + i] = str[i];
    }
    dest[destSize+strSize] = '\0';
    return dest;
}
int strcmp (const char* str1, const char* str2)
{
    unsigned str1Size = strlen(str1);
    unsigned str2Size = strlen(str2);
    if(str1Size == str2Size){
        for(int i=0; i<str2Size; ++i){
            if(str1[i]==str2[i]){
                continue;
            }
            else{
                return str1[i]-str2[i];
            }
        }
        return 0;
    }
    for(int i=0; i < (str1Size>str2Size?str1Size:str2Size);++i)
    {
        if(str1[i] != str2[i])
            return str1[i]-str2[i];
    }
}
int strncmp (const char* str1, const char* str2, unsigned n)
{
    int i;
    for(i = 0; i < n; ++i)
    {
        if(str1[i] != str2[i])
            return str1[i]-str2[i];
    }
    if(i == n){
        return 0;
    }
}
char* strstr(const char* str1, const char* str2)
{
    unsigned str1Size = strlen(str1);
    unsigned str2Size = strlen(str2);
    for(int i=0; i < str1Size; ++i)
    {
        if(str1[i] == str2[0]){
            if(strncmp(str1+i, str2, str2Size) == 0){
                return str1+i;
            }
        }
    }
    return NULL;
}