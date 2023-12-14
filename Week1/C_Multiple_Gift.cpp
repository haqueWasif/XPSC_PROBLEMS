<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int calcLog2(ll x, ll y){
    ll res = 1, ans=0;
    for(int i=1; res <= y/x; i++){
        res *= 2;
        ans = i;
    }
    return ans-1;
}
int main(){
    ll x, y; cin >> x >> y;


    int ans = calcLog2(x, y) + 1;

    cout << ans;
    
    
    return 0;
=======
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int calcLog2(ll x, ll y){
    ll res = 1, ans=0;
    for(int i=1; res <= y/x; i++){
        res *= 2;
        ans = i;
    }
    return ans-1;
}
int main(){
    ll x, y; cin >> x >> y;


    int ans = calcLog2(x, y) + 1;

    cout << ans;
    
    
    return 0;
>>>>>>> 7ff84f2 (OK)
}