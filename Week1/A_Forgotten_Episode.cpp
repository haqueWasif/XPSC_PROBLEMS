<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<bool> a(n+1, false);
    for(int i=1; i<n; i++){
        int x;
        cin >> x;
        a[x] = true;
    }

    for(int i=1; i<=n; i++){
        if(!a[i]) {
            cout << i;
            break;
        }
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<bool> a(n+1, false);
    for(int i=1; i<n; i++){
        int x;
        cin >> x;
        a[x] = true;
    }

    for(int i=1; i<=n; i++){
        if(!a[i]) {
            cout << i;
            break;
        }
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}