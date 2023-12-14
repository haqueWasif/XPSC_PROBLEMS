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

const double err = 1e-7;

bool is_illuminated(double w, pii p, pii a, pii b){
    double OA = sqrt(a.first*a.first + a.second*a.second);
    double OB = sqrt(b.first*b.first + b.second*b.second);

    double PA = sqrt((p.first-a.first)*(p.first-a.first) + (p.second-a.second)*(p.second-a.second));
    double PB = sqrt((p.first-b.first)*(p.first-b.first) + (p.second-b.second)*(p.second-b.second));

    double AB = sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));

    bool c1 = (OA<=w && PA<=w) || (OB<=w && PB<=w);
    bool c2 = (OA<=w && PB<=w) && (AB <= 2*w);
    bool c3 = (OB<=w && PA<=w) && (AB <= 2*w);

    return c1 || c2 ||c3;
}

double binarySearch(pii p, pii a, pii b){
    double l = 0, r = 1e4+5;

    double ans;
    while(r-l >= err){
        double m = l + (r-l)/2;

        if(is_illuminated(m, p, a, b)){
            ans = m;
            r = m;
        }
        else l = m;
    }
    return ans;
}

void solve(){
    pii p, a, b;
    cin >> p.first >> p.second;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;

    cout << fixed << setprecision(7) << binarySearch(p, a, b) << nl;

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}