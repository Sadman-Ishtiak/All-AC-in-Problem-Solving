#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        set<int>nums;
        for (int i = a; i <= b; i++) nums.insert(i);
        for (int i = c; i <= d; i++) nums.insert(i);
        cout << nums.size() << endl;
    }
	return 0;
}