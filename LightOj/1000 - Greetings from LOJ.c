#include<stdio.h>

int main()
{
    int n , a , b , c;

    scanf("%d", &n);

    for( c=0; c<n; c++ ){

        scanf("%d %d", &a , &b);

        printf("Case %d: %d\n", c+1 , a+b);
    }

    return 0;
}
