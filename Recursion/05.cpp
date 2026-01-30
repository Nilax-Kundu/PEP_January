#include <bits/stdc++.h>
using namespace std;
int reversenum(int n){
    if (n == 0) return 0;
    return ((n%10) + reversenum(n/10)*10);
}
int main() {
    cout<<reversenum(123);
    return 0;
}
//a number can't be reverse without helper function, this was a trial 