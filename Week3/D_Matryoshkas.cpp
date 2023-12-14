<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        map<int, int> mp;
        
        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);

        int tot=0;
        forI(i, 0, n){
            int v = a[i];
            if(mp[a[i]] != 0){
                tot++;
                while(mp[v] > 0){
                    mp[v]--; v++;
                }
            }
        }

        cout << tot << "\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        map<int, int> mp;
        
        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);

        int tot=0;
        forI(i, 0, n){
            int v = a[i];
            if(mp[a[i]] != 0){
                tot++;
                while(mp[v] > 0){
                    mp[v]--; v++;
                }
            }
        }

        cout << tot << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}