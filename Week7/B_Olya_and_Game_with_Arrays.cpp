#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> arr[i];}
#define forI_list(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
#define msi map<string,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

void solve(){
    ll n; cin >> n;
    
    vvll v(n);

    ll i, j, mn=INT_MAX;
    forI(i, 0, n){
        ll m; cin >> m;
        forI(j, 0, m){
            ll x; cin >> x;
            mn = min(mn, x);
            v[i].push_back(x);       
        }
        sort(v[i].begin(), v[i].end());
    }
    

    ll sum_mn2=0, mn2=INT_MAX;
    forI(i, 0, n){
        sum_mn2 += v[i][1];
        mn2 = min(mn2, v[i][1]);
    }
    cout << mn + sum_mn2 - mn2 << nl;
    
}

int main(){
    fastIO();

    ll t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}