#include<stdio.h>
#include<math.h>

int quadEq(double a, double b, double c, double* x1, double* x2)
{
    double D = (b * b) - (4 * a * c);

    if(D < 0)
    {
        printf("No real roots\n");
        return -1;
    }
    if(D == 0)
    {
        *x1 = *x2 = (-b) / (2 * a);
        printf("x1 = x2 = %.2lf\n", *x1);
        return 0;
    }
    if(D > 0)
    {
        *x1 = ((-b) + sqrt(D)) / (2 * a);
        *x2 = ((-b) - sqrt(D)) / (2 * a);
        printf("x1 = %.2lf\n", *x1);
        printf("x2 = %.2lf\n", *x2);
        return 0;
    }
}

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    while (scanf("%lf", &a) != EOF)
    {
        scanf("%lf", &b);
        scanf("%lf", &c);
        quadEq(a, b, c, &x1, &x2);
    }

    return 0;
}
