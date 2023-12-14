<<<<<<< HEAD
#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main(){
    int n;
    cin >> n;

    ll minOdd=INT_MAX, oddSum=0, evenSum=0;
    for(int i=0; i<n; i++){
        ll x; cin >> x;
        if(x % 2 == 0) evenSum += x;
        else {
            oddSum += x;
            minOdd = min(minOdd, x);
        }
    }

    ll res = oddSum + evenSum;
    
    if(res % 2 != 0) cout << res - minOdd; 
    else cout << res;

    return 0;
=======
#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main(){
    int n;
    cin >> n;

    ll minOdd=INT_MAX, oddSum=0, evenSum=0;
    for(int i=0; i<n; i++){
        ll x; cin >> x;
        if(x % 2 == 0) evenSum += x;
        else {
            oddSum += x;
            minOdd = min(minOdd, x);
        }
    }

    ll res = oddSum + evenSum;
    
    if(res % 2 != 0) cout << res - minOdd; 
    else cout << res;

    return 0;
>>>>>>> 7ff84f2 (OK)
}