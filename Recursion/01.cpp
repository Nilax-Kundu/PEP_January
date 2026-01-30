#include <bits/stdc++.h>
using namespace std;
void printer(int n){
    if (n==0) return;
    printer(n%10);
    if (n%2==0){
        cout<<n<<" ";
    }
    
}
int main() {
    printer(10);
    return 0;
}