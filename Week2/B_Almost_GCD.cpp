<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    int i, a[n];
    forI(i, 0, n) cin >> a[i];

    int k=2;
    pair<int, int> mx = {k, INT_MIN};
    while(k<=1000){
        int gcdNess=0;
        forI(i, 0, n) if(a[i] % k == 0) gcdNess++;
        if(mx.second < gcdNess) mx = {k, gcdNess};
        k++;  
    }

    cout << mx.first << "\n";

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    int i, a[n];
    forI(i, 0, n) cin >> a[i];

    int k=2;
    pair<int, int> mx = {k, INT_MIN};
    while(k<=1000){
        int gcdNess=0;
        forI(i, 0, n) if(a[i] % k == 0) gcdNess++;
        if(mx.second < gcdNess) mx = {k, gcdNess};
        k++;  
    }

    cout << mx.first << "\n";

    return 0;
>>>>>>> 7ff84f2 (OK)
}