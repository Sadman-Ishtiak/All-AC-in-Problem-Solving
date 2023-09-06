#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        char s[8][8];
        vector<char>ans;
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(s[i][j] != '.') ans.push_back(s[i][j]);
            }
        }
        for (auto i : ans) cout << i;
        cout << endl;
    }
    return 0;
}