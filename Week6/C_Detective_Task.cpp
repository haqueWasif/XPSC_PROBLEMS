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
    string s; cin >> s;
    int n = s.size();

    if(s[0] == '0') {
        cout << 1 << nl;
        return;
    }
    else if(s[n-1] == '1'){
        cout << 1 << nl;
        return;
    }

    int pos1=-1, pos0=-1, posQ=-1;
    bool found0 = false, foundQ = false;

    int i, j;
    forI(i, 0, n){
        if(s[i] == '1'){
            pos1 = i;
        }
        if(!found0 && s[i] == '0'){
            pos0 = i;
            found0 = true;
        }
        if(!foundQ && s[i] == '?'){
            posQ = i;
            foundQ = true;
        }
    }

    if(pos1 != -1 && pos0 != -1){
        cout << pos0 - pos1 + 1 << nl;
    }
    else if(pos1 == -1 && pos0 != -1){
        cout << pos0 - posQ + 1 << nl;
    }
    else if(pos1 == -1 && pos0 == -1){
        cout << n << nl;
    }
    else if(pos1 != -1 && pos0 == -1){
        cout << n-1 - pos1 + 1 << nl;
    }
    

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}