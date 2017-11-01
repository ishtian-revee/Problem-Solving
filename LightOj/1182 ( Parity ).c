#include<stdio.h>

int main()
{
    int n , m , i , a[1000] , j , sum;

    scanf("%d", &n);

    for( i=1; i<=n; i++ ){

        scanf("%d", &m);
        sum = 0;

        for( j=0; m>0; j++ ){

            a[j] = m%2;
            m=m/2;
            sum += a[j];
        }

        if( sum%2==0 ){

            printf("Case %d: even\n", i);
        }
        else{

            printf("Case %d: odd\n", i);
        }
    }

    return 0;
}
