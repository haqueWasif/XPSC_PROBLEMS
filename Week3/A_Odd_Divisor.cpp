#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;

        if( (n & (n-1)) == 0){
            cout << "NO" << "\n";
        }
        else cout << "YES" << "\n";
    }

    return 0;
}