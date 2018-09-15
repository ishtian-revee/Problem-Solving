#include<stdio.h>
#include<string.h>

int main(){
    int tc, i, j;
    char str[100];

    scanf("%d", &tc);
    getchar();
    for(i=0; i<tc; i++){
        gets(str);
        int n = strlen(str);
        int counter = 0;

        for(j=0; j<n; j++){
            if(str[j] == 'a' || str[j] == 'd' || str[j] == 'g' || str[j] == 'j' || str[j] == 'm' || str[j] == 'p' || str[j] == 't' || str[j] == 'w' || str[j] == ' '){
                counter += 1;
            }else if(str[j] == 'b' || str[j] == 'e' || str[j] == 'h' || str[j] == 'k' || str[j] == 'n' || str[j] == 'q' || str[j] == 'u' || str[j] == 'x'){
                counter += 2;
            }else if(str[j] == 'c' || str[j] == 'f' || str[j] == 'i' || str[j] == 'l' || str[j] == 'o' || str[j] == 'r' || str[j] == 'v' || str[j] == 'y'){
                counter += 3;
            }else if(str[j] == 's' || str[j] == 'z'){
                counter += 4;
            }
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}

