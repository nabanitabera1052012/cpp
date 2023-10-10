#include<iostream>
using namespace std;
int main(){
    int n=0;
    int sum=0;
    while(n<=100){
        if(n%2==0){
            cout<< n<<endl ;
            sum=sum+n;
        }
        n++;
    }
    cout<<"sum is "<<sum;


    return 0;
}