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

bool canCut(ll h, ll m, ll n, ll a[]){
    ll i, cuts=0;
    forI(i, 0, n){
        if(a[i] > h){
            cuts += a[i]-h;
        }
    }

    if(cuts >= m) return true;
    return false;
}

ll binarySearch(ll m, ll n, ll a[]){
    ll l = 0;
    ll r = *max_element(a, a+n);
    ll ans;

    while(l<=r){
        ll mid = l + (r-l)/2;

        if(canCut(mid, m, n, a)){
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }

    return ans;
}

void solve(){
    ll n, m; cin >> n >> m;

    ll a[n];
    inputArr(n, a);

    cout << binarySearch(m, n, a) << nl; 
    
}

int main(){
    fastIO();

    solve();

    return 0;
}