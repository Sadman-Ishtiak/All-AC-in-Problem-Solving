#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int a,b;
        cin >> a >> b;
        if (abs(a-b) > 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;        
    }
    return 0;
}