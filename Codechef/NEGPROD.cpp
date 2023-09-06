#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a[3],pos = 0, neg = 0;
        cin >> a[0] >> a[1] >> a[2];
        for (int i = 0; i < 3; i++)
        {
            if(a[i] < 0) neg++;
            if(a[i] > 0) pos++;
        }
        if(neg>0 && pos>0) cout << "YES" << endl;
        else cout <<  "NO" << endl;
    }
	return 0;
}