#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

void solve(int n, bool flag[]){
    int i;
    forI_R(i, 9, 1){
        if(n-i == 0 && !flag[i]){
            flag[i] = true;
            break;
        }
        if(n-i > 0 && !flag[i]){
            flag[i] = true;
            solve(n-i, flag);
            break;
        }
    }
}
int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        bool flag[10] = {false};

        solve(n, flag);

        int i;
        forI(i, 1, 10){
            if(flag[i]) cout << i;
        }
        cout << nl;

    }

    return 0;
}