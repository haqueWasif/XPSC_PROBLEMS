#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;


int powerOf2(int v){
    int cnt=0;
    while(1){
        if( (v & 1) != 0) break;
        v >>= 1;
        cnt++;
    }
    return cnt;
}
int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        int cnt=0;
        forI(i, 0, n){
            if(cnt >= n) break;
            cnt += powerOf2(a[i]);
        }

        pq_max pq;

        forI(i, 0, n){
            if( ((i+1) & 1) == 0 ){
                pq.push(powerOf2(i+1));
            }
        }

        int op=0;
        while(!pq.empty()){
            if(cnt >= n) break;
            cnt += pq.top();
            op++;
            pq.pop();
        }

        if(cnt >= n) cout << op << nl;
        else cout << -1 << nl;

    }

    return 0;
}