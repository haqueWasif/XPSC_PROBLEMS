#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    int i, a[n];
    forI(i, 0, n) { cin >> a[i]; }

    
    int prefixSum[n]; prefixSum[0] = a[0];
    forI(i, 1, n) prefixSum[i] = prefixSum[i-1] + a[i];

    int q; cin >> q;
    while(q--){
        int j; cin >> i >> j;
        cout << prefixSum[j] - prefixSum[i] + a[i] << "\n";

    }
    return 0;
}