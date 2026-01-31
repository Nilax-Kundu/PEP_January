#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int left, int right, int target){
    if (left>right) return false;
    int mid = left + (right - left)/2;
    if (arr[mid]<target){
        return true;
    }
    else if (arr[mid]<target){
        return binarySearch(arr, mid+1, right, target);
    } else {
        return binarySearch(arr,left,mid-1,target);
    }
}
int main() {
    
    return 0;
}