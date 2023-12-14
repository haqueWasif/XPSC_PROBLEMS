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
    int sz = n*(n-1)/2;

    mii mp;

    int b[sz];
    inputArr(sz, b);

    sort(b, b+sz);

    set<int> s;

    int i;
    forI(i, 0, sz){
        int x = b[i];
        s.insert(x);
        mp[x]++;
    }

    int cnt=n-1;
    for(auto val : s){
        if(mp[val] == cnt){
            cout << val << " ";
            cnt--; 
        }
        else{
            int j=0;
            while(mp[val] > j){
                cout << val << " ";
                j += cnt;
                cnt--;
            }
        }
    }
    cout << b[sz-1] << " ";

    cout << nl;
    

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}