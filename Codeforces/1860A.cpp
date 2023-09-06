#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        if(s == "()") cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            if(s.find("((") == -1 && s.find("))") == -1){
                for (int i = 0; i < n; i++)
                    cout << "(";
                for (int i = 0; i < n; i++)
                    cout << ")";
            }
            else{
                for (int i = 0; i < n; i++)
                    cout << "()";    
            }
            cout << endl;
        }
    }
    return 0;
}