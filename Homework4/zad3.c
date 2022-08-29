#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
double randDouble(void)
{
   return ((double)rand()) / (double)RAND_MAX;
}
double randDoubleInterval(const double a, const double b)
{
   return randDouble()*(b-a) + a;
}
 
int main()
{
    srand(time(NULL));
    int n, m, p;
    printf("n = ");
    scanf("%d", &n);
    double* arr = malloc(n*sizeof(double));
    if (arr == NULL){
        return EXIT_FAILURE;
    }
    int i=0;
    for( ; i<n; ++i)
    {
        arr[i] = randDoubleInterval(0.0, 1.0);
    }
    printf("m = ");
    scanf("%d", &m);
    arr = realloc(arr, (n+m)*sizeof(double));
    if (arr == NULL){
        return EXIT_FAILURE;
    }
    for( ; i<(n+m); ++i)
    {
        arr[i] = randDoubleInterval(1.0, 2.0);
    }
    printf("p = ");
    scanf("%d", &p);
    arr = realloc(arr, (n+m+p)*sizeof(double));
    if (arr == NULL){
        return EXIT_FAILURE;
    }
    for( ; i<(n+m+p); ++i)
    {
        arr[i] = randDoubleInterval(2.0, 3.0);
    }
 
    for(i=0 ; i<(n+m+p); ++i)
    {
        printf("arr[%d] = %.2lf\n", i, arr[i]);
    }
 
    free(arr);
 
 
    return 0;
}
