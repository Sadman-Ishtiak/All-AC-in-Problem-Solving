#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        sort(s.begin(), s.end());
        int result = s[n - 1] - s[0];
        for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				result = min(result, s[j] - s[i]);
			}
		}
		cout << result << endl;
    }
    return 0;
}