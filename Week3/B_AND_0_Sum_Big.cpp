#include<iostream>
#define ll long long
#define mod 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--) {
        ll n,k; cin >> n >> k;
        ll ans=1;

        while(k--) {
            ans= (ans%mod * n%mod)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
