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

void dfs(int u, vi adj[], bool visited[], vll& leaf){
    visited[u] = true;

    if(adj[u].size() == 1 && u != 1){
        leaf[u] = 1;
    }

    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v, adj, visited, leaf);
            leaf[u] += leaf[v];
        }
    }
}

int main(){
    fastIO();

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vi adj[n+1];

        int i;
        forI(i, 1, n){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }   

        bool visited[n+1] = {false};
        vll leaf(n+1, 0);

        dfs(1, adj, visited, leaf);   

        int q; cin >> q;
        while(q--){
            int x, y; cin >> x >> y;

            cout << leaf[x] * leaf[y] << nl;       
        }

        forI(i, 1, n+1) adj[i].clear();

    }

    return 0;
}