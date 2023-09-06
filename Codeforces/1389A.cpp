#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,l,r;
        cin >> l >> r;
        if(2*l > r){
            x = -1;
            y = -1;
        }
        else{
            x = l;
            y = 2*l;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}