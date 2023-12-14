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

void findConcussive(vi &v){
    int n = v.size();

    vi op1(n), op2(n);
    
    int pos1;
    for(int i=0; 2*i + 1 < n; i++){
        op1[2*i + 1] = v[i];
        pos1 = i;
    }
    for(int i=0; 2*i < n; i++){
        op1[2*i] = v[pos1+i+1];
    }

    int pos2;
    for(int i=0; 2*i < n; i++){
        op2[2*i] = v[i];
        pos2 = i;
    }
    for(int i=0; 2*i + 1 < n; i++){
        op2[2*i + 1] = v[pos2+i+1];
    }

    bool flag1 = true, flag2 = true;

    int i;
    forI(i, 1, n-1){
        if(i&1){
            if(op1[i-1] > op1[i] && op1[i] < op1[i+1]) continue;
            else flag1 = false;

            if(op2[i-1] < op2[i] && op2[i] > op2[i+1]) continue;
            else flag2 = false;
        }
        else{
            if(op1[i-1] < op1[i] && op1[i] > op1[i+1]) continue;
            else flag1 = false;

            if(op2[i-1] > op2[i] && op2[i] < op2[i+1]) continue;
            else flag2 = false;
        }
    }

    if(flag1){
        forI(i, 0, n){
            v[i] = op1[i];
        }
    }
    else if(flag2) {
        forI(i, 0, n){
            v[i] = op2[i];
        }
    }
    else v = {0};
}

void solve(){
    int n; cin >> n;

    vi v;

    int i;
    forI(i, 0, n){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    findConcussive(v);

    if(v.size() == 1) cout << -1 << nl;
    else{
            for(auto val : v) cout << val << " ";
            cout << nl;
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