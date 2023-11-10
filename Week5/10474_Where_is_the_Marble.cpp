#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

int binarySearch(int x, int n, int a[]){
    int found = -1;
    
    int l = 0, r = n-1;
    while(l <= r){
        int m = l + (r-l)/2;
        if(a[m] == x){
            found = m;
            r = m-1;
        }
        else if(a[m] < x){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return found;
}

int main(){
    fastIO();

    int cnt=1;
    while(1){
        int n, q;
        cin >> n >> q;

        if(n == 0 && q == 0) break;

        int i, a[n];
        forI(i, 0, n) cin >> a[i];
        sort(a, a+n);

        cout << "CASE# " << cnt << ":" << nl;
        while(q--){ 
            int x; cin >> x;
            int found = binarySearch(x, n, a);
            if(found == -1){
                cout << x << " not found" << nl;
            }
            else{
                cout << x << " found at "<< found+1 << nl;
            }
        }

        cnt++;
    }

    return 0;
}