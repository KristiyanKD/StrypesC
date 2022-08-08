#include<stdio.h>

int main()
{
    double num1, num2, num3;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);

    if( (num1-num2) > 0.0 )
    {
        if((num1-num3) > 0.0)
        {
            printf("Largest num: %lf\n", num1);
        }
        else{
            printf("Largest num: %lf\n", num3);
        }
    }
    else{
        if((num2-num3) > 0.0)
        {
            printf("Largest num: %lf\n", num2);
        }
        else{
            printf("Largest num: %lf\n", num3);
        }
    }

    
    return 0;
}