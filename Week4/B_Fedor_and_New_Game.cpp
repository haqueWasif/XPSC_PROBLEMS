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

    int n, m, k; cin >> n >> m >> k;

    int i, a[m+1];
    forI(i, 0, m+1){
        cin >> a[i];
    }
    int cnt=0;
    forI(i, 0, m){
        int res = (a[m] ^ a[i]), bitDiff = 0;
        while(res != 0){
            bitDiff += (res & 1);
            res >>= 1;
        }
        if(bitDiff <= k) cnt++;
    }
    cout << cnt << endl;

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

    int n, m, k; cin >> n >> m >> k;

    int i, a[m+1];
    forI(i, 0, m+1){
        cin >> a[i];
    }
    
    int cnt=0;
    forI(i, 0, m){
        int res = (a[m] ^ a[i]), bitDiff = 0;
        while(res != 0){
            bitDiff += (res & 1);
            res >>= 1;
        }
        if(bitDiff <= k) cnt++;
    }
    cout << cnt << endl;

    return 0;
>>>>>>> 7ff84f2 (OK)
}