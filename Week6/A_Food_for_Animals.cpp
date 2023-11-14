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

void solve(){
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

    if(x>=a){
        x -= a;
        a = 0;
        if(x != 0){
            if(c >= x){
                c -= x;
                x=0;
            }
        }
    }
    else x = 0;
    
    if(y>=b){
        y -= b;
        b = 0;
        if(y != 0){
            if(c >= y){
                c -= y;
                y=0;
            }
        }
    }
    else y = 0;

    if(x==0 && y==0) yes;
    else no;
    

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}