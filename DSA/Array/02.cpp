#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {2,5,3,1,8};
    for (int i=0;i<5/2;i++){
        arr[i] = arr[i] ^ arr[4-i];
        arr[4-i] = arr[i] ^ arr[4-i];
        arr[i] = arr[i] ^ arr[4-i];
    }
    for (int i: arr){
        cout<<i<<" ";
    }
    return 0;
}