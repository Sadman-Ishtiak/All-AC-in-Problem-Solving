#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    ll sum = 0;
    cin >> t;
    vector<int>a(t);
    for (int i = 0; i < t; i++){
        cin >> a[i];
        sum += a[i];
    }
    sum = sum/2+sum%2;
    ll month = 0, day = 0;
    while (sum > a[month]){
        sum -= a[month];
        month++;
    }
    cout << month + 1 << " " << sum << endl;
	return 0;
}
