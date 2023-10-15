#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter how many line you want to print";
    cin >> n;
    int m = 1;
    while (m <= n)

    {
        int i = 1;
        while (i <= m)
        {
            cout << i;
            i++;
        }
        m++;
        cout<<endl;
    }
}