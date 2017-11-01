#include<stdio.h>

int main()
{
    int n , i;
    double r , x , pi = 2 * acos (0.0) , a , b;

    scanf("%d", &n);

    for( i=1; i<=n; i++ ){

        scanf("%lf", &r);

        a = 4 * r * r;
        b = pi * r * r;
        x = a - b;

        printf("Case %d: %.2lf\n", i , x);
    }

    return 0;
}
