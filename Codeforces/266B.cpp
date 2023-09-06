#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n,t;
    cin >>  n >> t;
    vector<char>s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    while (t--){
        for (int i = 0; i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    for(auto i:s) cout << i;
	return 0;
}
