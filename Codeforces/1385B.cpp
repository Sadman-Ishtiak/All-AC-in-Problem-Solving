#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>nums;
        set<int>strict;
        int k = 0;
        for (int i = 0; i < 2*n; i++)
        {
            int tmp;
            cin >> tmp;
            strict.insert(tmp);
            if(strict.size() > k) nums.push_back(tmp);
            k = strict.size();
        }
        for(auto i : nums) cout << i << " ";
        cout << endl;
    }
	return 0;
}