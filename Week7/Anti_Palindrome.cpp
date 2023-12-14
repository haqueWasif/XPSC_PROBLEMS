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

    string t; cin >> t;

    bool flag = true;

    int i;
    forI(i, 0, n-1){
        if(t[i] != t[i+1]){
            flag = false;
            break; 
        }
    }

    if(flag){
        if(n % 2) cout << 2 << nl;
        else cout << 1 << nl;
    }
    else{
        int freq[26] = {0};
        forI(i, 0, n){
            freq[t[i]-'a']++;
        }

        int odd=0;
        forI(i, 0, 26){
            if(freq[i] % 2){
                odd++;
            }
        }

        if(odd > 1) cout << 0 << nl;
        else if(odd <= 1) cout << 1 << nl;
    }
    

    
    

}

int main(){
    fastIO();

    int tc; cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}