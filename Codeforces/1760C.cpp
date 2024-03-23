#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int>a(n), b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) b[i] = a[i];
    sort(b.begin(), b.end());
	int m1 = b[n-1], m2 = b[n-2];
	for(int i = 0; i < n; i++){
		if(a[i] ==m1){
			cout << a[i]-m2 << " ";
		} else cout << a[i]-m1 << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}