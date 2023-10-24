#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int, int>
#define ll long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<string> v(n);
        
        int i;
        forI(i, 0, n) cin >> v[i];

        int j; ll totCount=0;
        forI(i, 0, n-1){
            forI(j, i+1, n){
                int k, count=0;
                forI(k, 0, 2){
                    if(v[i][k] != v[j][k]) count++;
                }
                if(count == 1) totCount++;
            }
        }
        cout << totCount << "\n";
    }

    return 0;
}