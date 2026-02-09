#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<char>st;
    string a = "Hello World!";
    for (int i : a){
        st.push(i);
    } 
    string b = "";
    while(!st.empty()){
        b+=st.top();
        st.pop();
    }
    cout<<b<<endl;
    return 0;
}