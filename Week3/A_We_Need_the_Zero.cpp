#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int i, ans=0;
        forI(i, 0, n){
            int x; cin >> x;
            ans ^= x;
        }

        if((n & 1) == 0){
            if(ans == 0){
                cout << 0 << "\n";
            }
            else cout << -1 << "\n";
        }
        else cout << ans << "\n";
        
        

    }

    return 0;
}