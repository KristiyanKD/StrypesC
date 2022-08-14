#include<stdio.h>
#include<math.h>

int isTriangle(double a, double b, double c)
{
    if(a>0 && b>0 && c>0)
    {
        if( (a+b>c) && (b+c>a) && (a+c>b) )
        {
            return 1;
        }
    }
    printf("Invalid triangle sides!\n");
    return 0;
}

int triangle(double a, double b, double c, double* S, double* P)
{
    if( isTriangle(a,b,c) )
    {
        *P = a + b + c;
        double p = (a + b + c) / 2;
        *S = sqrt(p * (p - a) * (p - b) * (p - c));
    }
    else{
        return -1;
    }
}

int main()
{
    double a = 0, b = 0, c = 0, S = 0, P = 0;
    while(scanf("%lf", &a) != EOF)
    {
        scanf("%lf", &b);
        scanf("%lf", &c);
        if( triangle(a, b, c, &S, &P) == -1){
            continue;
        }
        printf("S = %.2lf\n", S);
        printf("P = %.2lf\n", P);
    }

    return 0;
}