#include<stdio.h>
#include<math.h>


double solutionPointA(double mass, double height)
{
    return mass/(height*height);
}

double solutionPointB(double mass, double height)
{
    return 1.3*(mass/(pow(height, 2.5)));
}

int main()
{
    double mass=75;
    double height=180;

    printf("%lf\n", solutionPointA(mass, height));
    printf("%lf\n", solutionPointB(mass, height));

    
    return 0;
}
