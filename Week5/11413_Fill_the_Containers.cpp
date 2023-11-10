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

bool check(int mid, int m, vi& vessel) {
    int cnt = 1;
    int maxCapacity = 0;
    for(int i = 0; i < vessel.size(); i++) {
        if(maxCapacity + vessel[i] > mid) {
            maxCapacity = vessel[i];
            cnt++;
            if(cnt > m) return false;
        } else {
            maxCapacity += vessel[i];
        }
    }
    return true;
}

int main(){
    fastIO();
    
    ll n, m;
    while(cin >> n >> m){
        vi vessel(n);

        int i;
        forI(i, 0, n) cin >> vessel[i];

        int l = *max_element(vessel.begin(), vessel.end());
        int r = accumulate(vessel.begin(), vessel.end(), 0);

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(check(mid, m, vessel)) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        cout << l << nl;

    }

    return 0;
}