#include<stdio.h>
#include<stdlib.h>

int main() {
    int tc, ax, ay, bx, by, cx, cy, dx, dy, i;
    long area, a, b;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = ax + (cx-bx);
        dy = ay + (cy-by);

        a = ax * by + bx * cy + cx * dy + dx * ay;
        b = ay * bx + by * cx + cy * dx + dy * ax;

        area = abs(a-b);
        area /= 2;
        printf("Case %d: %d %d %d\n", i+1, dx, dy, area);
        area = 0;
    }
    return 0;
}

