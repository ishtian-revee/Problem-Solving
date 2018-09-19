#include<stdio.h>

int convertToBin(int n){
    int res = 0, m = 1;

    while(n>0){
        res += n%2*m;
        m *= 10;
        n /= 2;
    }
    return res;
}

int main(){
    int tc, i, j, da, db, dc, dd, ba,bb, bc, bd;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d.%d.%d.%d", &da, &db, &dc, &dd);
        scanf("%d.%d.%d.%d", &ba, &bb, &bc, &bd);

        da = convertToBin(da);
        db = convertToBin(db);
        dc = convertToBin(dc);
        dd = convertToBin(dd);

        if(da==ba && db==bb && dc==bc && dd==bd){
            printf("Case %d: Yes\n", i+1);
        }else{
            printf("Case %d: No\n", i+1);
        }
    }
    return 0;
}
