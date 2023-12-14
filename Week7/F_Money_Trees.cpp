#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> arr[i];}
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


bool findSubArr(int n, int k, int m, int h[], int a[]){
    int i=0, j=0, cnt=0, val=0;
    while(j<n){
        if(j>=m-1 || h[j] % h[j+1] == 0){
            cnt++;
            val += a[j];
        }
        if(j >= m-1){
            if(cnt == m && val <= k){
                return true;
            }
            
            if(cnt != 0 && i+1 < n && (h[i] % h[i+1]) == 0){
                cnt--;
                val -= a[i];
            }
            i++;

            if(cnt != 0 && j+1 < n && (h[j] % h[j+1]) != 0){
                cnt--;
                val -= a[j];
            }
        }

        
        j++;
    }

    return false;
}

int binarySearch(int n, int k, int h[], int a[]){
    int l = 1, r = n;

    int ans=0;
    while(l <= r){
        int m = l + (r-l)/2;

        if(findSubArr(n, k, m, h, a)){
            ans = m;
            l = m+1;
        }
        else{
            r = m-1;
        }
    }

    return ans;
}

void solve(){
    int n, k; cin >> n >> k;

    int a[n], h[n];
    inputArr(n, a);
    inputArr(n, h);

 
    cout << binarySearch(n, k, h, a) << nl;

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}