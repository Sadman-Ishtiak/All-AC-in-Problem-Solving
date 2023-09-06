#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    while(true){
        cin >> n;
        if(n == 0) return 0;
        vector<int>a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i] - 1] = i+1;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
            if(a[i] != b[i]) flag = true;
        if(flag) cout << "not ambiguous";
        else cout << "ambiguous";
        cout << "\n";
    }
	return 0;
}