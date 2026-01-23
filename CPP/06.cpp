#include <iostream>
using namespace std;
class Data{
    public:
    string name;
    int age;
    string subject;
    Data(string name, int age, string subject){
        this->name = name;
        this->age = age;
        this->subject = subject;
        cout<<"Constructor ran successfully"<<endl;
    }
};
int main(){
    Data *d1 = new Data("Nilax", 18, "DSA");
    cout<<"Name: " << d1->name<<endl;
    cout<<"Age: " << d1->age <<endl;
    cout<<"Subject: " << d1->subject<<endl;
    return 0;
}