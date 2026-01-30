#include <bits/stdc++.h>
using namespace std;
int sumarr(int arr[], int n){
    if (n-1<0) return 0;
    return arr[n-1] + sumarr(arr, n-1);
}
int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sumarr(arr, size);
    return 0;
}