#include<iostream>
#include<cstdio>
#include<string.h>
#include<stack>

using namespace std;

int main(){
    int n;
    string bal;

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++){
        stack <char> st;

        getline(cin, bal);
        for(int j=0; j<bal.length(); j++){
            if(bal[j] == '(' || bal[j] == '['){
                st.push(bal[j]);
            }else if(bal[j] == ')'){
                if(st.empty() || st.top() != '('){
                    st.push('r');
                    break;
                }else{
                    st.pop();
                }
            }else if(bal[j] == ']'){
                if(st.empty() || st.top() != '['){
                    st.push('r');
                    break;
                }else{
                    st.pop();
                }
            }
        }

        if(st.empty()){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}
