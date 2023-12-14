<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int, int>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        map<pair<char, char>, pii> mp;
        
        int i;
        forI(i, 0, n){
            char ch; cin >> ch;
            if(ch >= 'a' && ch <= 'z'){
                pii val = mp[{ch, ch-32}];
                mp[{ch, ch-32}] = {++val.first, val.second};
            }
            else{
                pii val = mp[{ch+32, ch}];
                mp[{ch+32, ch}] = {val.first, ++val.second};
                
            }
        }

        int ans=0;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            pii val = it->second;
            
            int mn = min(val.first, val.second);
            int mx = max(val.first, val.second);
            
            if(mn == 0 && mx == 1) continue;
            
            ans += mn;
            
            val.first -= mn; val.second -= mn;
            if(val.first > 1 && k > 0) {
                int op = min(val.first/2, k);
                ans += op;
                k -= op;
            }
            else if(val.second > 1 && k > 0){
                int op = min(val.second/2, k);
                ans += op;
                k -= op;
            }
        }

       cout << ans << "\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int, int>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        map<pair<char, char>, pii> mp;
        
        int i;
        forI(i, 0, n){
            char ch; cin >> ch;
            if(ch >= 'a' && ch <= 'z'){
                pii val = mp[{ch, ch-32}];
                mp[{ch, ch-32}] = {++val.first, val.second};
            }
            else{
                pii val = mp[{ch+32, ch}];
                mp[{ch+32, ch}] = {val.first, ++val.second};
                
            }
        }

        int ans=0;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            pii val = it->second;
            
            int mn = min(val.first, val.second);
            int mx = max(val.first, val.second);
            
            if(mn == 0 && mx == 1) continue;
            
            ans += mn;
            
            val.first -= mn; val.second -= mn;
            if(val.first > 1 && k > 0) {
                int op = min(val.first/2, k);
                ans += op;
                k -= op;
            }
            else if(val.second > 1 && k > 0){
                int op = min(val.second/2, k);
                ans += op;
                k -= op;
            }
        }

       cout << ans << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}