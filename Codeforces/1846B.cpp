#include <bits/stdc++.h>
using namespace std;
string s[3];

bool hcheck(char a){
    for (int i = 0; i < 3; i++)
    {
        bool flag = true;
        for (int j = 0; j < 3; j++)
        {
            if(s[i][j] != a) flag = false;
        }
        if(flag) return flag;
    }
    return false;
}
bool vcheck(char a){
    for (int i = 0; i < 3; i++)
    {
        if(s[0][i] == a && s[1][i] == a && s[2][i] == a) return true;
    }
    return false;
}
bool xcheck(char a){
    if(s[0][0] == a && s[1][1] == a && s[2][2] == a) return true;
    else if(s[0][2] == a && s[1][1] == a && s[2][0] == a) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> s[0] >> s[1] >> s[2];
        if(hcheck('X')) cout << "X" << endl;
        else if(hcheck('+')) cout << "+" << endl;
        else if(hcheck('O')) cout << "O" << endl;
        else if(vcheck('X')) cout << "X" << endl;
        else if(vcheck('+')) cout << "+" << endl;
        else if(vcheck('O')) cout << "O" << endl;
        else if(xcheck('X')) cout << "X" << endl;
        else if(xcheck('+')) cout << "+" << endl;
        else if(xcheck('O')) cout << "O" << endl;
        else cout << "DRAW" << endl;
    }
	return 0;
}