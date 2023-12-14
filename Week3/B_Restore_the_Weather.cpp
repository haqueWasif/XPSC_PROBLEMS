<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
#define pii pair<int,int>
using namespace std;


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        priority_queue<pii> pqA;
        
        priority_queue<int> pqB;

        int i; ll a[n], b[n];
        forI(i, 0, n){
            cin >> a[i];
            pqA.push({a[i], i});
        }

        forI(i, 0, n){
            cin >> b[i];
            pqB.push(b[i]);
        }

        vector<pair<pii, int>> v;

        while(!pqA.empty()){
            v.push_back({pqA.top(), pqB.top()});
            pqA.pop(); pqB.pop();
        }

        forI(i, 0, n){
            int val = v[i].second;
            int pos = v[i].first.second;
            b[pos] = val;
        }

        forI(i, 0, n){
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
#define pii pair<int,int>
using namespace std;


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        priority_queue<pii> pqA;
        
        priority_queue<int> pqB;

        int i; ll a[n], b[n];
        forI(i, 0, n){
            cin >> a[i];
            pqA.push({a[i], i});
        }

        forI(i, 0, n){
            cin >> b[i];
            pqB.push(b[i]);
        }

        vector<pair<pii, int>> v;

        while(!pqA.empty()){
            v.push_back({pqA.top(), pqB.top()});
            pqA.pop(); pqB.pop();
        }

        forI(i, 0, n){
            int val = v[i].second;
            int pos = v[i].first.second;
            b[pos] = val;
        }

        forI(i, 0, n){
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}