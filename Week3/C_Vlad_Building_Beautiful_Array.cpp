#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        sort(a, a+n);

        bool flag;  
        if(a[0] % 2 != 0){
            flag = true;
        }
        else{
            flag = true;
            forI(i, 0, n){
                if(a[i] % 2 != 0){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
}