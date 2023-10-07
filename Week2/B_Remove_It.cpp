#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;


int main(){
    int n, x; cin >> n >> x;

    int i, a[n];
    forI(i, 0, n){
        cin >> a[i];
    }

    forI(i, 0, n){
        if(a[i] == x) continue;
        cout << a[i] << " ";
    }
    cout << endl;


    

    return 0;
}