#include <bits/stdc++.h>
using namespace std;
bool findkey(int arr[][4], int key, int r, int l){
    for (int i = 0; i < r; i++){
        for ( int j = 0; j < l; j++){
            if (arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[4][4] = {1, 7, 14, 6, 11, 15, 5, 10, 2, 4, 16, 3, 9, 13, 8, 12};
    int key = 9;
    cout<<findkey(arr, key, 4, 4);
    return 0;
}