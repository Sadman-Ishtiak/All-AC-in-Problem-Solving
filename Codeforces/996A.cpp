#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans = 0;
    vector<int>notes = {100,20,10,5,1};
    for(auto i : notes){
        ans += t/i;
        t = t%i;
    }
    cout << ans;
	return 0;
}
