#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter * size: ";
    cin>>x;
    for (int i=0;i<=x;i++){
        for (int j=0;j<=x;j++){
            if(i == 0 || i == x){
                cout<<"* ";
            }
            else{
                if (j == 0 || j == x){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}