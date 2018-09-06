#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int num);

int main(){
    int tc, n, i;
    bool palindrome;

    scanf("%d", &tc);
    if(tc>=0 && tc<=20000){
        for(i=0; i<tc; i++){
            scanf("%d", &n);
            palindrome = isPalindrome(n);

            if(palindrome){
                printf("Case %d: Yes\n", i+1);
            }else{
                printf("Case %d: No\n", i+1);
            }
        }
    }
}

bool isPalindrome(int num){
    int temp, rem, rev = 0;
    temp = num;

    for(; num!=0; num=num/10){
        rem = num%10;
        rev = rev*10+rem;
    }

    if(temp==rev){
        return true;
    }else{
        return false;
    }
}
