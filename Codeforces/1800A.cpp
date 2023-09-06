#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[n],s2[n];
        cin >> s;
        for (int i = 0; i < n; i++) s[i] = tolower(s[i]);
        for (int i = 0; i < n; i++){
            if(s[i] == s[i-1]) s[i-1] = '*';
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] != '*'){
                s2[k] = s[i];
                k++;
            }
        }
        s2[k] = '\0';
        if(strcmp(s2,"meow")) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}