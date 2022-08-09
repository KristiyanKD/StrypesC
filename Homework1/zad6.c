#include<stdio.h>
#include<math.h>

int main()
{
    printf("DOUBLE:\n");

    double a = 0.1;
    double b = 0.2;
    double c = 0.3;

    printf("test #1 -> ");
    if(a + b == c)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #2 -> ");
    if(fabs(a + b - c) < 0.01)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #3 -> ");
    if(fabs(a + b - c) < 0.0000000000001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #4 -> ");
    if(fabs(a + b - c) < 0.0000000000000001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #5 -> ");
    //one zero more than test #4
    if(fabs(a + b - c) < 0.00000000000000001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }

    printf("FLOAT:\n");
    float x = 0.1;
    float y = 0.2;
    float z = 0.3;

    printf("test #1 -> ");
    if(x + y == z)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #2 -> ");
    if(fabs(x + y - z) < 0.01)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #3 -> ");
    if(fabs(x + y - z) < 0.00001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #4 -> ");
    if(fabs(x + y - z) < 0.0000001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }
    printf("test #5 -> ");
    //one zero more than test #4
    if(fabs(x + y - z) < 0.00000000000000001)
    {
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");
    }

    return 0;
}