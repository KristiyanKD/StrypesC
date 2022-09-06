#include<stdio.h>

int isRectangle(double w, double h)
{
    if(w >= 0 && h >= 0)
    {
        return 1;
    }
    printf("Invalid rectangle sides!\n");
    return 0;
}

int rectangle(double w, double h, double* S, double* P)
{
    if(isRectangle(w, h))
    {
        *P = (w + h) * 2;
        *S = w * h;
    }
    else{
        return -1;
    }
}

int main()
{
    double a = 0, b = 0, S = 0, P = 0;
    while(scanf("%lf", &a) != EOF)
    {
        scanf("%lf", &b);
        if( rectangle(a, b, &S, &P) == -1){
            continue;
        }
        printf("S = %.2lf\n", S);
        printf("P = %.2lf\n", P);
    }

    return 0;
}
