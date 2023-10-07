#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int gcd(int a, int b, int c){
    int mn = min(a, b); mn = min(mn, c);

    int i, res=1;
    forI(i, 2, mn+1){
        if( (a % i == 0 ) && (b % i == 0) && (c % i == 0) ){
            res = i;
        }   
    }

    return res;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int k; cin >> k;

    int a, b, c, ans=0;
    forI(a, 1, k+1){
        forI(b, 1, k+1){
            forI(c, 1, k+1){
                ans += gcd(a, b, c);
            }
        }
    }

    cout << ans << "\n";

    return 0;
}