#include<stdio.h>


int main()
{
    //int answer;
    //printf("program with 2 or 3 bool statements? : ");
    //scanf("%d", &answer);

    int first = 0;
    int second = 0;
    //bool third = 0;
    printf("First: ");
    scanf("%d", &first);
    printf("Second: ");
    scanf("%d", &second);

    //if(answer == 3)
    //{
    //    bool third = 0;
    //    printf("Third: ");
    //    scanf("%d", &third);
    //}

    printf("Result: %d\n", first^second ? 1 : 0);
    //printf("%d\n", first^second^third ? 1 : 0);
    
    
    return 0;
}