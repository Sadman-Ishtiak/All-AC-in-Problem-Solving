#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char s1[5001] = {'\0'}, s2[5001] = {'\0'};
        scanf("%s",s1);
        scanf("%s",s2);
        bool flag = false;
        // Ptocessing
        vector<int>lz1,lz2,fo1,fo2;
        int i = 0;
        while(s1[i] != '\0'){
            if(s1[i] == '0' && s2[i] == '0' && s1[i+1] == '1' && s2[i+1] == '1') flag = true;
            i++;
        }
        if(s1[1] == '1' && s2[1] == '1') flag = true;
        if(s1[i-2] == '0' && s2[i-2] == '0') flag = true;
        // Printing answer
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
