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

const int N = 1e9+7;

void solve(){
    ll n, k; cin >> n >> k;


    if(k == 1) cout << 1 << nl;
    else if (k == 2) cout << 2 << nl;

    else{
        ll res = 1;

        ll i;
        forI(i, 0, n){
            if(i<k-1) res = (res * (k-i)) % N;
        }

        cout << res % N << nl;
    }

}

int main(){
    fastIO();

    ll t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}