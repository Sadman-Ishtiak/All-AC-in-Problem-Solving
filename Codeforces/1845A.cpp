#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x,ans;
        cin >> n >> k >> x;
        if(k == 1) cout << "NO";
        else if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n; i++) cout << "1 ";
        }
        else if(k==2){
            if(n%2 == 0){
                cout << "YES" << endl;
                cout << n/2 << endl;
                for (int i = 0; i < n/2; i++)
                    cout << 2 << " ";
            }
            else cout << "NO";
        }
        else{
            cout << "YES" << endl;
            cout << n/2 << endl;
            if(n % 2 == 0) cout << 2 << " ";
            else cout << 3 << " ";
            for (int i = 0; i < n/2-1; i++)
            {
                cout << "2 ";
            }
            
        }
        cout << endl;
    }
    return 0;
}