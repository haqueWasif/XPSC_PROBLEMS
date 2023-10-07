#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int,int>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> dist;

        int i;
        forI(i, 0, n){
            int a, b; cin >> a >> b;
            dist.push_back(a-b);
        }

        sort(dist.begin(), dist.end(), greater<int>());

        int count = 0;
        forI(i, 0, n){
            if(dist[i] <= 0) break;
            count++; 
        }
        cout << count << "\n";

    }

    return 0;
}