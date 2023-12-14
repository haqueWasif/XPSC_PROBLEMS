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


void func(int k, int n, int x, int &ans, int a[]){
    int i=0, j=0, sum=a[0];
    while (j < n) {
        if (sum == x){
            ans++;
            j++;
            if (j < n) sum += a[j];
        } 
        else if (sum < x){
            j++;
            if (j < n) sum += a[j];
        } 
        else{
            sum -= a[i];
            i++;
        }
    }
}


void solve(){
    int n, x; cin >> n >> x;

    int i, a[n];
    forI(i, 0, n){
        cin >> a[i];
    }

    int ans=0;
    func(i, n, x, ans, a);

    cout << ans << nl;

}

int main(){
    fastIO();

    solve();

    return 0;
}