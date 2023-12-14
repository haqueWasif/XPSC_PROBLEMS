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

const int N = 2e5+5;

vvi divisors(N);

int calcDivisors(){
    int i, j;
    forI(i, 1, N+1){
        for(int j=1; j*j <= i; j++){
            if(i % j == 0){
                divisors[i].push_back(j);
                if(j != i/j) divisors[i].push_back(i/j);
            }
        }
    }
}

void solve(){
    int n; cin >> n;

    int a[n];
    inputArr(n, a);

    mii ans;

    int i;
    forI(i, 0, n){
        ans[a[i]]++;    
    }

    int res=0, mx=0;
    forI(i, 1, n+1){
        res = 0;
        for(auto d : divisors[i]){
            res += ans[d];
        }
        mx = max(res, mx);
    }

    cout << mx << nl;

}

int main(){
    fastIO();

    calcDivisors();
    
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}