#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void tranform(char *a, char *k, char *b){}


int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size(), count = 0;
        for (int i = 0; i < n; i++) if (s[i] == '(') count++;
        int start[count];
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
                for(int j=i;j<n;j++){
                    if(s[j] == ')'){
                        s[j] = s[i];
                        s[i] = '(';
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '(');
            else cout << s[i];
        }
        cout << endl;
    }
	return 0;
}