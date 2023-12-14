<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const int N = 1e3+5;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int m, s; cin >> m >> s;

        int i, b[N] = {0}, mx=0;
        forI(i, 0, m){
            int x; cin >> x;
            b[x]++;
            mx = max(x, mx);
        }

        int count = 0;
        forI(i, 1, mx+1){
            if(b[i] == 0) count++;
        }

        bool flag = false;

        int ans=0; i=1;
        while(ans < s){
            if(b[i] == 0) {
                ans+=i;
                if(count != 0) count--;
            }
            if(ans == s) {
                flag = true;
                break;
            }
            if(ans > s) break;
            i++;
        }

        if(flag && count == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const int N = 1e3+5;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int m, s; cin >> m >> s;

        int i, b[N] = {0}, mx=0;
        forI(i, 0, m){
            int x; cin >> x;
            b[x]++;
            mx = max(x, mx);
        }

        int count = 0;
        forI(i, 1, mx+1){
            if(b[i] == 0) count++;
        }

        bool flag = false;

        int ans=0; i=1;
        while(ans < s){
            if(b[i] == 0) {
                ans+=i;
                if(count != 0) count--;
            }
            if(ans == s) {
                flag = true;
                break;
            }
            if(ans > s) break;
            i++;
        }

        if(flag && count == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}