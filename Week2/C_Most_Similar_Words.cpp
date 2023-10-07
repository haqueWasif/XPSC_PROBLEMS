#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        vector<string> v;

        int i, j, k;
        forI(i, 0, n){
            string s; cin >> s;
            v.push_back(s);
        }

        int mn = INT_MAX;
        forI(i, 0, n-1){
            forI(j, i, n){
                if(i == j) continue;
                
                int dif = 0;
                forI(k, 0, m){
                    dif += abs(v[i][k] - v[j][k]);
                }
                mn = min(dif, mn);
            }
        }

        cout << mn << "\n";
    }

    return 0;
}