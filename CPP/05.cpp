#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    (*ptr)++;
    cout<< *ptr <<endl;
    cout<< a <<endl;
    return 0;
}