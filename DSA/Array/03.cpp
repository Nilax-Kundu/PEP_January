#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n){
    for (int i=0;i<5;i++){
        if (arr[i] == n){
            if (arr[i]<5){
                return arr[i]/2;
            } else{
                return arr[i]*2;
            }
        } 
    }
    return -1;
};
int main() {
    int arr[5] = {3,1,6,4,2};
    cout<<linearSearch(arr, 4);
    return 0;
}