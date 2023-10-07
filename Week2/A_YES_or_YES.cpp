#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int i;
        forI(i, 0, 3){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        }

        if(s == "YES") cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}