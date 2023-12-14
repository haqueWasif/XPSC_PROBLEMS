<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;

        vector<string> v[3];
        map<string, int> mp;
        int k=0;
        for(int i=1; i<=3*n; i++){
            string w; cin >> w;
            v[k].push_back(w);
            if(i % n == 0) k++;
            mp[w]++;
            if(mp[w] == 3) mp[w] = 0;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 1) it->second = 3;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 2) it->second = 1;
        }
        
        for(int i=0; i<3; i++){
            int val = 0;
            for(int j=0; j<n; j++){
                val += mp[v[i][j]];
            }
            cout << val << " ";
        }
        cout << endl;

    }
    
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;

        vector<string> v[3];
        map<string, int> mp;
        int k=0;
        for(int i=1; i<=3*n; i++){
            string w; cin >> w;
            v[k].push_back(w);
            if(i % n == 0) k++;
            mp[w]++;
            if(mp[w] == 3) mp[w] = 0;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 1) it->second = 3;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 2) it->second = 1;
        }
        
        for(int i=0; i<3; i++){
            int val = 0;
            for(int j=0; j<n; j++){
                val += mp[v[i][j]];
            }
            cout << val << " ";
        }
        cout << endl;

    }
    
    return 0;
>>>>>>> 7ff84f2 (OK)
}