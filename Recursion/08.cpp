#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
    if (n-1 == 0 || n==0){
        return true;
    }
    if (arr[n-1] > arr[n-2]){
        return isSorted(arr, n-1);
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, size);
    return 0;
}