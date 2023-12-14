#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define forI_list(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define forI_mp(it, mp) for(auto it=mp.begin(); it != mp.end(); it++)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
#define msi map<string,int>
#define mipbpii map<int, pair<bool, pii>>
#define pii pair<int,int>
#define pbi pair<bool, int>
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
        int n, k; cin >> n >> k;

        int i, j, mn, mx; mipbpii mp;
        forI(i, 0, n){
            int x; cin >> x;

            if(mp[x].first){
                mx = max(mp[x].second.first, i);
                mn = min(mp[x].second.second, i);

                mp[x].second = {mx, mn};

                continue;
            }

            mp[x].first = true;

            mn=INT_MAX, mx=INT_MIN;

            mx = max(mx, i);
            mn = min(mn, i);
            
            mp[x].second = {mx, mn};
        }

        while(k--){
            int a, b; cin >> a >> b;

            if(mp[a].first && mp[b].first){
                int ind_a_min = mp[a].second.second;
                int ind_b_max = mp[b].second.first;

                bool flag = false;

                if(ind_a_min < ind_b_max) flag = true;

                if(flag) yes;
                else no;
            }
            else no;
        }


        

    }

    return 0;
}