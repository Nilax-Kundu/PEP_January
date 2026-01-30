#include <bits/stdc++.h>
using namespace std;
bool linears(int arr[], int n, int key){
    if (n>0 && arr[n-1] == key) return true;
    if (n<=0){
        return false;
    }
    return linears(arr, n-1, key);
}
int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<linears(arr, size, 1);
    return 0;
}