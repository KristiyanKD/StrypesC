#include <stdio.h>

unsigned len(const char* str)
{
    int i;
    for(i = 0; str[i] != '\0'; ++i){}

    return i;
}

void SPRINTF(char* szBuffer, char* szPattern, char** args)
{
    int argsCount = 0; 
    int bufferLen = 0;

    for(int i = 0; i < len(szPattern); ++i)
    {
        if(szPattern[i] == '%' && szPattern[i + 1] == 's' )
        {
            //because of s
            i++;
            for(int j = 0; j < len(args[argsCount]); ++j)
            {
                szBuffer[bufferLen++] = args[argsCount][j];
            }
            argsCount++;
        }
        else if(szPattern[i] == '\\')
        {
            szBuffer[bufferLen++] = '\\';
            szBuffer[bufferLen++] = '\\';
        }
        else if(szPattern[i] == '\n')
        {
            szBuffer[bufferLen++] = '\\';
            szBuffer[bufferLen++] = 'n';
        }
        //the other escape sequences can be added
        else
        {
            szBuffer[bufferLen++] = szPattern[i];
        }
    }
}

int main()
{
    const char* args[] = { "Arg1", "Arg2"};
    char szBuffer[100];
    SPRINTF(szBuffer, "This function takes %s and %s as arguments\n", args);
    printf("%s", szBuffer);
    putchar('\n');

    return 0;
}