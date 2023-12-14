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
#define msi map<string,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

void solve(){
    int n; cin >> n;

    int a[n];
    inputArr(n, a);

    int i, sum=0;
    forI(i, 0, n) sum += a[i];
    
    pq_min pq;

    int sum1=0, mx = 0;
    forI(i, 0, n){
        sum1 += a[i];
        
        if( (sum % sum1) == 0){
            int segments = (sum / sum1), segment_sum = 0;

            mx=max(i+1, 0);

            int j, cnt=1, segment_sz=0;
            forI(j, i+1, n){
                segment_sum += a[j];
                segment_sz++;
                if(segment_sum == sum1){
                    cnt++;
                    mx = max(mx, segment_sz);
                    segment_sum = 0;
                    segment_sz = 0;

                }
            }

            if(cnt == segments) {
                pq.push(mx);
            }

        }
    }
    cout << pq.top() << nl;
    

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}