#include<stdio.h>

int main()
{
    int n , a , b , m , k , i , j , r=0;

    scanf("%d", &n);

    for( i=1; i<=n; i++){

        scanf("%d %d", &a , &b);

        if( a>b ){

            for( j=b; j<a; j++ ){

                r+=4;
            }

            k = (a*4) + r + 19;
            r=0;
            printf("Case %d: %d\n", i , k);
        }

        if( a==b || b>a ){

            m = (b*4) + 19;
            printf("Case %d: %d\n", i , m);
        }

    }

    return 0;
}
