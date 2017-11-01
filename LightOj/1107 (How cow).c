#include<stdio.h>

int main()
{
    int x1 , x2 , y1 , y2 , m , n , a , b , i , j;

    scanf("%d", &m);

    for( i=1; i<=m; i++ ){

        scanf("%d %d %d %d", &x1 , &y1 , &x2 , &y2);
        scanf("%d", &n);

        printf("Case %d:\n", i);

        for( j=1; j<=n; j++ ){

            scanf("%d %d", &a , &b);

            if( a>=x1 && a<=x2 && b>=y1 && b<=y2 ){

                printf("Yes\n");
            }else{

                printf("No\n");
            }
        }
    }

    return 0;
}
