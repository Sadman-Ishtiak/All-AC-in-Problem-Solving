#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        cout << a[p-1]-1 << endl;
    }
	return 0;
}