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
    ll n, k; cin >> n >> k;

    ll odds = ( (n & 1) == 0 ? n/2 : n - (n-1)/2);
    ll evens = n/2;

    if( (k & 1) == 0 && (odds & 1) == 0){
        ll rem = k - (odds-k)/2;
        if(rem <= 0) yes;
        else{   
            if(evens >= rem) yes;
            else no;
        }
    }
    else if( (k & 1) == 1 && (odds & 1) == 1){
        ll rem = k - (odds-k)/2;
        if(rem <= 0) yes;
        else{   
            if(evens >= rem) yes;
            else no;
        }
    }
    else no;
}

int main(){
    fastIO();

    ll t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}