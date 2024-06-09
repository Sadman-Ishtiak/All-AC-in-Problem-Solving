#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    if(n == 2){
        cout << s;
        return 0;
    }
    map<string, int> counter;
    for (int i = 0; i < n-2; i++){
        char temp[3];
        temp[0] = s[i];
        temp[1] = s[i+1];
        temp[2] = '\0';
        counter[temp] = 0;
    }
    for (int i = 0; i < n-1; i++){
        char temp[3];
        temp[0] = s[i];
        temp[1] = s[i+1];
        temp[2] = '\0';
        counter[temp]++;
    }
    int m = 0;
    for(auto i : counter){
        // cout << i.first << " " << i.second << endl;
        if(i.second > m){
            m = i.second;
            ans = i.first;
        }
    }
    cout << ans;
    return 0;
}