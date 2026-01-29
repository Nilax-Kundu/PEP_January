#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello";
    int i = str.length() - 1;
    int j = 0;
    cout<<str<<endl;
    while (j<i){
        swap(str[i],str[j]);
        i--;
        j++;
    }
    cout<<str<<endl;
    return 0;
}