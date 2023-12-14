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
    int n; cin >> n;

    int a[n];
    inputArr(n, a);

    mii cnt;

    int idx[101];

    int i;
    forI(i, 0, n){
        cnt[a[i]]++;
        idx[a[i]] = i;
    }

    vi ans(n, 1);

    int tot_cnt=0;
    for(auto [val, bundle] : cnt){
        if(bundle >= 2){
            tot_cnt++;
        }
    }

    if(tot_cnt < 2) cout << -1 << nl;
    else{
        int last_idx;

        for(auto [val, bundle] : cnt){
            if(bundle >= 2){
                ans[idx[val]] = 2;
                last_idx = idx[val];
            }
        }
        ans[last_idx] = 3;

        forI(i, 0, n){
            cout << ans[i] << " ";
        }
        cout << nl;
    }   
    

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}