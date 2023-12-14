#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define mii map<int,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
using namespace std;

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vll v(n);

        int i;
        forI(i, 0, n){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        i = 0; int j=n-1; vll box;
        while(j >= 0){
            if(box.empty()){
                box.push_back(v[j]);
            }
            else{
                if(box[i] < v[j]) {
                    box.push_back(v[j]);
                    i++;
                }
                else box[i] ^= v[j];
            }
            v.pop_back();
            j--;
        }

        cout << box.size() << "\n";

    }

    return 0;
}