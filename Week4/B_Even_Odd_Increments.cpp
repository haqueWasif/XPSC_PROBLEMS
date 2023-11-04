#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
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
        ll n, q; cin >> n >> q;


        ll i, a[n], sum=0, odd=0, even=0;
        forI(i, 0, n){
            cin >> a[i];
            sum += a[i];
            if( (a[i] & 1) == 0) even++;
            else odd++;
        }

        while(q--){
            ll type, x;
            cin >> type >> x;
            
            if(type == 0){
                sum += (even * x);
                if( (x & 1) == 1){
                    odd += even;
                    even = 0;
                }
            }
            else{
                sum += (odd * x);
                if( (x & 1) == 1){
                    even += odd;
                    odd = 0;
                }
            }

            cout << sum << nl;
        }
    }

    return 0;
}