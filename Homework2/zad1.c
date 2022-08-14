#include<stdio.h>

int main()
{
    double num_first = -1, num_second = 0;
    char sign;

    while( scanf("%lf", &num_first) != EOF )
    {
        scanf("%c", &sign);
        scanf("%lf", &num_second);
        
        if(sign == '+'){
            printf("%.2lf\n", num_first + num_second);
        }
        if(sign == '-'){
            printf("%.2lf\n", num_first - num_second);
        }
        if(sign == '*'){
            printf("%.2lf\n", num_first  * num_second);
        }
        if(sign == '/'){
            if(num_second == 0){
                printf("Cannot devide with 0!\n");
                continue;
            }
            printf("%.2lf\n", num_first / num_second);
        }
    }

    return 0;
}