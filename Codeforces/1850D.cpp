#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>danger(n);
        for (int i = 0; i < n; i++)
        {
            cin >> danger[i];
        }
        sort(danger.begin(),danger.end());
        vector<int>ans;
        for (int i = 0; i < n-1; i++)
        {
            if(danger[i+1] - danger[i] > k) ans.push_back(i+1);
        }
        ans.push_back(n);
        int question = ans.at(0);
        for (int i = 0; i < ans.size() - 1; i++)
        {
            question = max(question,ans[i+1] - ans[i]);
        }
        cout << n-question << endl;
    }
    return 0;
}