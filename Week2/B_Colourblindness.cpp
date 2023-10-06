#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        
        string a, b; 
        cin >> a >> b;
        
        int i;
        forI(i, 0, n){
            if(a[i] == 'G' || a[i] == 'B') a[i] = 'X';
            if(b[i] == 'G' || b[i] == 'B') b[i] = 'X';
        }

        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}