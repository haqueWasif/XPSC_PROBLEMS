<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int 
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;   

    ll i, cost[n], sortedCost[n];
    forI(i, 0, n) {
        cin >> cost[i];
        sortedCost[i] = cost[i];
    }
    sort(sortedCost, sortedCost+n);

    ll prefixSum1[n], prefixSum2[n];
    prefixSum1[0] = cost[0]; 
    prefixSum2[0] = sortedCost[0];

    forI(i, 0, n){
        prefixSum1[i] = prefixSum1[i-1] + cost[i];
        prefixSum2[i] = prefixSum2[i-1] + sortedCost[i];
    }

    ll m; cin >> m;
    while(m--){
        ll type, l, r; cin >> type >> l >> r; l--; r--;

        if(type == 1){
            cout << prefixSum1[r] - prefixSum1[l] + cost[l] << "\n";
        }   
        else{
            cout << prefixSum2[r] - prefixSum2[l] + sortedCost[l] << "\n";    
        }
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int 
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;   

    ll i, cost[n], sortedCost[n];
    forI(i, 0, n) {
        cin >> cost[i];
        sortedCost[i] = cost[i];
    }
    sort(sortedCost, sortedCost+n);

    ll prefixSum1[n], prefixSum2[n];
    prefixSum1[0] = cost[0]; 
    prefixSum2[0] = sortedCost[0];

    forI(i, 0, n){
        prefixSum1[i] = prefixSum1[i-1] + cost[i];
        prefixSum2[i] = prefixSum2[i-1] + sortedCost[i];
    }

    ll m; cin >> m;
    while(m--){
        ll type, l, r; cin >> type >> l >> r; l--; r--;

        if(type == 1){
            cout << prefixSum1[r] - prefixSum1[l] + cost[l] << "\n";
        }   
        else{
            cout << prefixSum2[r] - prefixSum2[l] + sortedCost[l] << "\n";    
        }
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}