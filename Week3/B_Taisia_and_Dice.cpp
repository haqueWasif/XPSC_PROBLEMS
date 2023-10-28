#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, s, r;
        cin >> n >> s >> r;

        int mx = s-r;
        vector<int> v(n, mx);
        
        int i, sum = n*mx;
        forI(i, 0, n){
            while(v[i] > 1 && sum > s){
                v[i]--;
                sum--;
            }
        } 

        forI(i, 0, n){
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}