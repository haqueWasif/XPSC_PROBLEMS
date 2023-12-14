#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int i=0;
        while(n > 1){
            n >>= 1;
            i++;
        }

        int ans = 1 << i;

        cout << ans-1 << "\n";
    }

    return 0;
}