#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s[8];
        for (int i = 0; i < 8; i++)
            cin >> s[i];
        int counter[8];
        for (int i = 0; i < 8; i++){
            counter[i] = 0;
            for (int j = 0; j < 8; j++){
                if(s[i][j] == '#') counter[i]++;
            }
        }
        for (int i = 1; i < 7; i++){
            if(counter[i - 1] == 2 && counter[i] == 1 && counter[i+1] == 2){
                for (int j = 0; j < 8; j++)
                    if(s[i][j] == '#') cout << i+1 << " " << j+1;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}