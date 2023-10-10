#include<iostream>
using namespace std;
int main(){
    cout<<"enter amount "<<endl;
    int p;
    cin>>p;
    cout<<"enter rate"<<endl;
    int r;
    cin>>r;
    cout<<"enter time"<<endl;
    int t;
    cin>>t;
    int interest=(p*t*r)/100;
    cout <<interest;
    return 0;

}