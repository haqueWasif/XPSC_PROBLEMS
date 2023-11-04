#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define forI_map(it, mp) for(it = mp.begin(); it != mp.end(); it++)
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
        int n; char ch; cin >> n >> ch;


        string s; cin >> s;
        
        vi pos_ch, pos_g;

        int i;
        forI(i, 0, n){
            if(s[i] == ch){
                pos_ch.push_back(i);
            }
            if(s[i] == 'g'){
                pos_g.push_back(i);
            }   
        } 

        if(n == 1 || ch == 'g') cout << 0 << nl;

        else{
            mii mp;
            
            int mx1 = INT_MIN, mx2 = INT_MIN;

            for(auto chPos : pos_ch){
                for(auto gPos : pos_g){
                    if(chPos < gPos){
                        mx1 = max(mx1, gPos - chPos);
                        mp[chPos]++;
                        break;
                    }
                }     
            }

            for(auto chPos : pos_ch){
                for(auto gPos : pos_g){ 
                    if(chPos > gPos){
                        if(mp[chPos] == 0){
                            mx2 = max(mx2, n-chPos+gPos);
                            break;
                        }
                    }
                }     
            }
            
            if(mx1 == INT_MAX) cout << mx1 << nl;
            else if(mx2 == INT_MAX) cout << mx2 << nl;
            else cout << max(mx1, mx2) << nl;
        }
        
        
    }

    return 0;
}