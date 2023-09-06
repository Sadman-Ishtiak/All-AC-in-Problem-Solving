#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q = 0;
        cin >> n;
        char x[n];
        scanf("%s", x);
        for (int i = 0; i < n; i++)
        {
            if(q < 0) q = 0;
            if(x[i] == 'Q') q++;
            else q--;
        }
        if((q <= 0)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}