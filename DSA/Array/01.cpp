#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    for (int i=4;i>=0;i--){
        cout<<sizeof(arr[i])<<" ";
    }
    cout<<endl;
    for (int i : arr){
        cout<<sizeof(double(i))<<" ";
    }
    // cout<<endl;
    // for (int i=4;i>=0;i--){
    //     cout<<sizeof(arr[i])<<" ";
    // }
    // cout<<endl;
    // for (int i : arr){
    //     cout<<sizeof(double(i))<<" ";
    // }
    return 0;
}