#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        int i; ll a[n], b[n];
        forI(i, 0, n){
            cin >> a[i];
        }
        forI(i, 0, n){
            cin >> b[i];
        }

        int j;
        forI(i, 0, n){
            forI(j, 0, n){
                if(abs(a[i]-b[i]) > k){
                    if(abs(a[i] - b[j]) <= k) swap(b[i], b[j]);

                }
                else {
                    if(abs(a[j] - b[j]) > k){
                        if(abs(a[i] - b[j]) <= k) swap(b[i], b[j]);
                    }
                }
            }   
        }

        forI(i, 0, n){
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}