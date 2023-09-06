#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,temp,pos = 0, neg = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == 1) pos++;
            if(temp == -1) neg++;
        }
        if(n%2 == 1) cout << -1 << endl;
        else cout << (max(pos,neg)-min(pos,neg))/2 << endl;
    }
	return 0;
}