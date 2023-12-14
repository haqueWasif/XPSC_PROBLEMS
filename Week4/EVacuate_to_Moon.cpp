#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
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

int main(){
    fastIO();

    ll t; cin >> t;
    while(t--){
        ll n, m, h; cin >> n >> m >> h;

        ll i;

        pq_max a, b;
        forI(i, 0, n){
            ll x; cin >> x;
            a.push(x);

        }

        forI(i, 0, m){
            ll x; cin >> x;
            b.push(x);
        }

        ll totE=0;
        while(!a.empty() && !b.empty()){
            if(b.top() >= a.top()){
                totE += a.top();
                a.pop();
                b.pop();
            }
            else{
                if((b.top() * h) > a.top()){
                    totE += a.top();
                }
                else totE += (b.top()*h);
                a.pop();
                b.pop();
            }
        }

        cout << totE << nl;



        

    }

    return 0;
}