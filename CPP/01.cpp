#include <iostream>
using namespace std;
int main() {
    int principal;
    cout<<"Enter Principal amount: ";
    cin>>principal;
    int rate;
    cout<<"Enter rate of interest: ";
    cin>> rate;
    cout<<"Enter time period: ";
    int time;
    cin>> time;
    int SI = (principal*rate*time)/100;
    if (SI > 50){
        cout<<"Pay the tax"<<endl;
    }
    else {
        cout<<"Don't pay the tax"<<endl;
    }
    return 0;
}
