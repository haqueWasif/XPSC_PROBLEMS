<<<<<<< HEAD
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
#define mci map<char,int>
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

    map<char, vi> mp;
    
    int i;
    forI(i, 0, n){
        mp[s[i]].push_back(i+1);
    }

    if(s[0] > s[n-1]){
        int jump = 0, cost = abs(s[0]-s[n-1]);

        vi path;
        
        forI(i, 0, 26){
            char ch = s[0]-i;

            if(ch < s[n-1]) break;

            if(mp.find(ch) != mp.end()){
                for(auto v : mp[ch]){
                    path.push_back(v);
                }
            }
        }

        cout << cost << " " << path.size() << nl; 

        for(auto x : path){
            cout << x << " ";
        }
        cout << nl;

    }
    else if(s[0] < s[n-1]){
        int jump = 0, cost = abs(s[0]-s[n-1]);

        vi path;
        
        forI(i, 0, 26){
            char ch = s[0]+i;

            if(ch > s[n-1]) break;

            if(mp.find(ch) != mp.end()){
                for(auto v : mp[ch]){
                    path.push_back(v);
                }
            }
        }

        cout << cost << " " << path.size() << nl; 

        for(auto x : path){
            cout << x << " ";
        }
        cout << nl;
    }
    else{
        cout << 0 << " " << mp[s[0]].size() << nl; 

        for(auto x : mp[s[0]]){
            cout << x << " ";
        }
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
=======
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
#define mci map<char,int>
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

    map<char, vi> mp;
    
    int i;
    forI(i, 0, n){
        mp[s[i]].push_back(i+1);
    }

    if(s[0] > s[n-1]){
        int jump = 0, cost = abs(s[0]-s[n-1]);

        vi path;
        
        forI(i, 0, 26){
            char ch = s[0]-i;

            if(ch < s[n-1]) break;

            if(mp.find(ch) != mp.end()){
                for(auto v : mp[ch]){
                    path.push_back(v);
                }
            }
        }

        cout << cost << " " << path.size() << nl; 

        for(auto x : path){
            cout << x << " ";
        }
        cout << nl;

    }
    else if(s[0] < s[n-1]){
        int jump = 0, cost = abs(s[0]-s[n-1]);

        vi path;
        
        forI(i, 0, 26){
            char ch = s[0]+i;

            if(ch > s[n-1]) break;

            if(mp.find(ch) != mp.end()){
                for(auto v : mp[ch]){
                    path.push_back(v);
                }
            }
        }

        cout << cost << " " << path.size() << nl; 

        for(auto x : path){
            cout << x << " ";
        }
        cout << nl;
    }
    else{
        cout << 0 << " " << mp[s[0]].size() << nl; 

        for(auto x : mp[s[0]]){
            cout << x << " ";
        }
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
>>>>>>> 7ff84f2 (OK)
}