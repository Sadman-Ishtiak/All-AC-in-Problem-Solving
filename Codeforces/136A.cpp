#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i] - 1] = i+1;
    }
    for(auto i : b) cout << i << " ";
    return 0;
}