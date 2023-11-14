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
    int n; cin >> n;

    string s; cin >> s;

    char server = 'A', receiver = 'B';

    int i, scoreA=0, scoreB=0;
    forI(i, 0, n){
        if(s[i] == server && server == 'A'){
            scoreA++;
        }
        else if(s[i] == server && server == 'B'){
            scoreB++;
        }
        else if(s[i] == receiver){
            swap(server, receiver); 
        }
    }

    cout << scoreA << " " << scoreB << nl;

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}