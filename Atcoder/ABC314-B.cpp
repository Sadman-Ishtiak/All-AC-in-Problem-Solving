#include<bits/stdc++.h>
using namespace std;

int main(){
    //Input
    int n;
    cin >> n;
    set<int>bet[n];
    for (int i = 0; i < n; i++)
    {
        int betcount;
        cin >> betcount;
        for (int j = 0; j < betcount; j++)
        {
            int tmp;
            cin >> tmp;
            bet[i].insert(tmp);
        }
    }
    int win;
    cin >> win;

    //Processing this S**t
    int count = 0;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        if(bet[i].find(win) != bet[i].end()){
            count++;
            ans.push_back(i+1);
        }
    }
    int smallest = INT32_MAX;
    for (auto i : ans)
    {
        int t = bet[i-1].size();
        smallest = min(smallest, t);
    }
    int out = 0;
    vector<int>output;
    for(auto i : ans){
        int t = bet[i-1].size();
        if(t == smallest){
            out++;
            output.push_back(i);
        }
    }
    // Output
    cout << out << endl;
    for(auto i : output) cout << i << " ";
    return 0;
}