#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size-1;
    while (start<=end){
        int mid = (start+end)/2;
        if (arr[mid] == key) return key;
        else if (arr[mid<key]) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr, 8, size);
    return 0;
}