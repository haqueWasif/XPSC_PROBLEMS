<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define forI_list(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> a[i];}
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mll map<ll, ll>
#define mic map<int,char>
#define msi map<string,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

vll calcFactors(ll n){
    vll factors;
    for(ll i = 2; i * i <= n; i++){
        while(n % i == 0){
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}

void solve(){
    ll n; cin >> n;

    ll a[n];
    inputArr(n, arr);
    
    ll i; mll mp;
    forI(i, 0, n){
        vll primes = calcFactors(a[i]);
        for(auto p : primes) mp[p]++;
    } 

    for(auto itr : mp){
        if(itr.second % n != 0){
            no;
            return;
        }
    }
    yes;  
}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define forI_list(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> a[i];}
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mll map<ll, ll>
#define mic map<int,char>
#define msi map<string,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

vll calcFactors(ll n){
    vll factors;
    for(ll i = 2; i * i <= n; i++){
        while(n % i == 0){
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}

void solve(){
    ll n; cin >> n;

    ll a[n];
    inputArr(n, arr);
    
    ll i; mll mp;
    forI(i, 0, n){
        vll primes = calcFactors(a[i]);
        for(auto p : primes) mp[p]++;
    } 

    for(auto itr : mp){
        if(itr.second % n != 0){
            no;
            return;
        }
    }
    yes;  
}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}