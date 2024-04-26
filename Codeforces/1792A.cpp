#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve(){
    int n, ones = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) ones++;
    }
    cout << (ones/2+ones%2)+n-ones << endl;
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
