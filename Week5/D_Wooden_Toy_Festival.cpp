<<<<<<< HEAD
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

bool isPossible(int m, int n, int a[]){
    vector<int> workers;
    int val = a[0]+m;
    workers.push_back(val);

    int i;
    forI(i, 1, n){
        if(abs(a[i]-val) > m){
            val = a[i]+m;
            workers.push_back(val);
        }
    }

    if(workers.size() <= 3) return true;
    return false;
}

int binarySearch(int n, int a[]){
    int ans;

    int l = 0, r = 1e9;
    while(l<=r){
        int m = l + (r-l)/2;
        if(isPossible(m, n, a)){
            r = m - 1;
            ans = m;
        }
        else l = m + 1;
    }
    
    return ans;
}

void solve(){
    int n; cin >> n;

    int a[n];
    inputArr(n, a);
    sort(a, a+n);

    cout << binarySearch(n, a) << nl;
    
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

bool isPossible(int m, int n, int a[]){
    vector<int> workers;
    int val = a[0]+m;
    workers.push_back(val);

    int i;
    forI(i, 1, n){
        if(abs(a[i]-val) > m){
            val = a[i]+m;
            workers.push_back(val);
        }
    }

    if(workers.size() <= 3) return true;
    return false;
}

int binarySearch(int n, int a[]){
    int ans;

    int l = 0, r = 1e9;
    while(l<=r){
        int m = l + (r-l)/2;
        if(isPossible(m, n, a)){
            r = m - 1;
            ans = m;
        }
        else l = m + 1;
    }
    
    return ans;
}

void solve(){
    int n; cin >> n;

    int a[n];
    inputArr(n, a);
    sort(a, a+n);

    cout << binarySearch(n, a) << nl;
    
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