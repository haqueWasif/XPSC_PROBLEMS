<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
using namespace std;

int main(){
    fastIO();

    int t; cin >> t;

    while(t--){
        int n, b; cin >> n >> b;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        int ans=-1;
        forI(i, 0, n){
            if((a[i] & b) == b){
                ans &= a[i];
            }  
        }

        if(ans == b) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;

=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
using namespace std;

int main(){
    fastIO();

    int t; cin >> t;

    while(t--){
        int n, b; cin >> n >> b;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        int ans=-1;
        forI(i, 0, n){
            if((a[i] & b) == b){
                ans &= a[i];
            }  
        }

        if(ans == b) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;

>>>>>>> 7ff84f2 (OK)
}