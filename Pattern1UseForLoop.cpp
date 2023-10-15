#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter how many line you want to print ";
    cin>>n;
    

    for (int i = 1; i<=n; i++)
    {
        for (int m = 1; m<=i; m++)
        {
            cout<<m;
        }
        cout<<endl;
        
    }
    


}