#include<stdio.h>

int main()
{
    int n , a , b , c , i;

    scanf("%d", &n);

    for( c=0; c<n; c++ ){

        scanf("%d", &i);

        a = i/2;
        b = i - a;

        printf("%d %d\n", a , b);
    }

    return 0;
}
