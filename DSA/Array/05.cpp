#include <bits/stdc++.h>
using namespace std;
//selection sort
void SelectionSort(vector<int> &arr){
    int size = arr.size();
    for (int i=0;i<size-1;i++){
        int min = i;
        for (int j = i+1;j<size;j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
void BubbleSort(vector<int> &arr){
    int size = arr.size();
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
void InsertionSort(vector<int> &arr){
    int n = arr.size();
    for (int i = 1; i < n;i++){
        int j = i-1;
        int key = arr[i];
        while (key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    vector<int> arr;
    arr.resize(10);
    arr = {2,5,3,5,6,4,1,5,7,0};
    SelectionSort(arr);
    for (int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
/* 
Big O (upper bound), Theta (middle bound), Omega (lower bound)

1. O(1) -> Time taken is constant, doesn't depend upon input size.
    eg. cout<<"Hello";

2. O(log n) -> Time grows logarithmically as input size increases.

3. O(n) -> Time grows directly proportional to input size.
    eg. for (int i=0;i<n;i++){}
*/