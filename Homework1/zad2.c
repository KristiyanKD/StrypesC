#include<stdio.h>
#include<math.h>

double volumeStraight(double radius, double height)
{
    return M_PI*radius*radius*height;
}

double volumeLaid(double radius, double lenght, double height)
{
    double area = (acos((radius-height)/radius)*radius*radius - ((radius-height)*sqrt(2*radius*height-height*height)));
    printf("Area: %lf\n", area);
    return area * lenght;

}

int main()
{
    double R = 0, H = 0;
    char answer;
    while(answer!='p' && answer!='l')
    {
        printf("prav(p) ili legnal(l): ");
        scanf("%c", &answer);
    }
    if(answer == 'p')
    {
        printf("Radius (R): ");
        scanf("%lf", &R);
        printf("Height (H): ");
        scanf("%lf", &H);
        
        printf("Volume of water: %.2lf\n", volumeStraight(R, H));
    }
    else{
        double L = 0;
        printf("Radius (R): ");
        scanf("%lf", &R);
        printf("Height (H): ");
        scanf("%lf", &H);
        printf("Lenght (L): ");
        scanf("%lf", &L);

        //without validation if H is less or equal to 2*R
        //and for negative numbers
        
        printf("Volume of water: %.2lf\n", volumeLaid(R, L, H));

    }

    
    return 0;
}