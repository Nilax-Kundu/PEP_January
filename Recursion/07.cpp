#include <bits/stdc++.h>
using namespace std;
int climb (int n){
    if (n==0) return 1;
    if (n<0) return 0;
    return climb(n-1) + climb (n-2);
}
int main() {
    cout<<climb(1);
    return 0;
}