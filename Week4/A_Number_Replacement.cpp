<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long v
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
        int n; cin >> n;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }
        
        char freq[51];
        
        string s;  cin >> s;
        forI(i, 0, s.size()){
            freq[a[i]] = s[i];
        }
        
        string x;
        forI(i, 0, n){
            x += freq[a[i]];
        }

        if(s == x) yes;
        else no;

    }

    return 0;
=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long v
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
        int n; cin >> n;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }
        
        char freq[51];
        
        string s;  cin >> s;
        forI(i, 0, s.size()){
            freq[a[i]] = s[i];
        }
        
        string x;
        forI(i, 0, n){
            x += freq[a[i]];
        }

        if(s == x) yes;
        else no;

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}