#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> v;

        int i;
        forI_R(i, n, 1){
            v.push_back(i);
        }   
        
        bool flag = true;
        forI(i, 0, v.size()){
            if(v[i] == i+1){
                if(i+1 == v.size()-1){
                    flag = false;
                    break;
                }
                if(i+1 == v.size()-2) swap(v[i], v[i+2]);
                else swap(v[i], v[i+1]);
            }
        }

        if(flag){
            forI(i, 0, n) cout << v[i] << " ";
            cout << nl;
        }
        else cout << -1 << nl;

    }

    return 0;
}