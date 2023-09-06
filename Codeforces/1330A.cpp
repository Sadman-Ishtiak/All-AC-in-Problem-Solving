#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,k, ans = 0;
        cin >> n >> k;
        s = n;
        set <int> a;
        for(int i = 0; i < n ; i++){
            int b;
            cin >> b;
            a.insert(b);
        }
        for(auto i : a){
            if(i <= k) k++;
        }
        for(auto i : a) if(i == k+1) k++;
        cout << k << endl;
    }
    return 0;
}