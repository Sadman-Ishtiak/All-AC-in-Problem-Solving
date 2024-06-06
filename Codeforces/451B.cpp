#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int l = 0, r = n-1;
    while (a[l] == b[l] && l<n)
    {
        l++;
    }
    if(l == n) l = 0;
    while (a[r] == b[r] && r > 0)
    {
        r--;
    }
    reverse(a.begin()+l, a.begin()+r+1);
    for (int i = 0; i < n-1; i++){
        if(a[i] != b[i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << l+1 << " " << r+1;
    return 0;
}