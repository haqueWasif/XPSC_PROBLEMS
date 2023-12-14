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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        list<int> a;
        mii mp;

        int i;
        forI(i, 0, n){
            int x; cin >> x;
            a.push_back(x);
            mp[x]++;
        }

        int cnt = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > 1) cnt += it->second - 1;
        }
        
        int op = 0;
        forI(i, 0, n){
            if(cnt == 0) break;        
            if(mp[a.front()] > 1) {
                cnt--;
                mp[a.front()]--;
            }
            a.pop_front();
            op++;
        }

        cout << op << nl;

    }

    return 0;
}