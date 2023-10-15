#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<string> v;
        map<string, int> mp;

        int i;
        forI(i, 0, n){
            string s; cin >> s;
            v.push_back(s);
            mp[s] = 1;
        }
        
        int j;
        forI(i, 0, n){
            forI(j, i, n){
                if( (v[i] + v[j]).size() > 8) continue;
                if(mp.count(v[i]+v[j]) > 0){
                    mp[v[i]+v[j]]++;
                }
                if(mp.count(v[j]+v[i]) > 0){
                    mp[v[j]+v[i]]++;
                }
            }
        }
        
        vector<int> digits;

        forI(i, 0, v.size()){
            if(mp[v[i]] > 1) digits.push_back(1);
            else digits.push_back(0); 
        }
        

        forI(i, 0, n) cout << digits[i];
        cout << "\n";
    }

    return 0;
}