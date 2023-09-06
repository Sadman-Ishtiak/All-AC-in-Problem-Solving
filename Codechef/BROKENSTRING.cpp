#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s1[n+1], s2[n/2+1], s3[n/2+1];
        scanf("%s", s1);
        for (int i = 0; i < n/2; i++)
        {
            s2[i] = s1[i];
            s3[i] = s1[i+n/2];
        }
        s2[n/2] = '\0';
        s3[n/2] = '\0';
        if(strcmp(s2,s3)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
	return 0;
}