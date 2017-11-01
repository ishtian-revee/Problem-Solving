#include<stdio.h>

int main ()
{
    int t , i , a , b , c , m , n , p , q , s;

    scanf("%d", &t);

    for( i=1; i<=t; i++ ){

        scanf("%d %d %d", &a , &b , &c);

        if( a>=1 && a<=40000 && b>=1 && b<=40000 && c>=1 && c<=40000 ){

            if ( a>=b && a>=c ){

                s = a;
                p = b;
                q = c;
            }else if( b>=c && b>=a ){

                s = b;
                p = c;
                q = a;
            }else if( c>=a && c>=b ){

                s = c;
                p = a;
                q = b;
            }

            m = ( p*p ) + ( q*q );
            n = s * s;

            if( m==n ){

                printf("Case %d: yes\n", i);
            }else{

                printf("Case %d: no\n", i);
            }
        }

    }

    return 0;
}
