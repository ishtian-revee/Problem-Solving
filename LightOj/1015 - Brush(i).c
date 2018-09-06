#include<stdio.h>

int main()
{
    int t , n , d , l=0 , sum ;

    scanf("%d", &t);

    if( t<=100 ){

        for( t; t>0; t-- ){

            scanf("%d", &n);

            if( n<=1000 ){

                sum = 0;

                for( n; n>0; n-- ){

                    scanf("%d", &d);

                    if( d>0 ){

                        sum+=d;
                    }
                }

                printf("Case %d: %d\n", ++l , sum);
            }
        }
    }

    return 0;
}
