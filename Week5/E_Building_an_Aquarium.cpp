#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> a[i];}
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


bool isPossible(ll h, ll x, ll n, ll a[]){
    ll i, water=0;
    forI(i, 0, n){
        if(h-a[i] < 0) continue;
        water += (h - a[i]);
    }
    return (water <= x);
}
ll binarySearch(ll x, ll n, ll a[]){
    ll l = 1;
    ll r = LONG_MAX;

    ll ans;
    while(l<=r){
        ll m = l + (r-l)/2;

        if(isPossible(m, x, n, a)){
            ans = m;
            l = m+1;
        }
        else r = m-1;
    }

    return ans;
}
void solve(){
    ll n, x; cin >> n >> x;

    ll a[n];
    inputArr(n, a);

    cout << binarySearch(x, n, a) << nl;
}

int main(){
    fastIO();

    ll t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}