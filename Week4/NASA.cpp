<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define N (1 << 15) + 1
using namespace std;


void calcPalindrome(vi &pal){
    int i;
    forI(i, 0, N){
        string a = to_string(i), b=a;
        reverse(b.begin(), b.end());
        if(a == b) pal.push_back(i);
    }
}

int main(){
    fastIO();

    int t; cin >> t;

    vi pal;
    calcPalindrome(pal);

    while(t--){
        int n; cin >> n;

        int i, j, a[n];
        forI(i, 0, n){
            cin >> a[i]; 
        }

        u_mii res; ll cnt=0;
        for(auto val : a){
            res[val]++;
            for(auto ele : pal){
               cnt += res[val ^ ele];
            }
        }

        cout << cnt << nl;

    }

    return 0;
=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define N (1 << 15) + 1
using namespace std;


void calcPalindrome(vi &pal){
    int i;
    forI(i, 0, N){
        string a = to_string(i), b=a;
        reverse(b.begin(), b.end());
        if(a == b) pal.push_back(i);
    }
}

int main(){
    fastIO();

    int t; cin >> t;

    vi pal;
    calcPalindrome(pal);

    while(t--){
        int n; cin >> n;

        int i, j, a[n];
        forI(i, 0, n){
            cin >> a[i]; 
        }

        u_mii res; ll cnt=0;
        for(auto val : a){
            res[val]++;
            for(auto ele : pal){
               cnt += res[val ^ ele];
            }
        }

        cout << cnt << nl;

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}