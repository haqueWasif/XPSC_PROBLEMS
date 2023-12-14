<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const int N=4;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int i, a[N];
        forI(i, 0, N) cin >> a[i];

        int count=0;
        forI(i, 1, N){
            if(a[i] > a[0]) count++;
        }
        
        cout << count << "\n";

    }
    



    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const int N=4;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int i, a[N];
        forI(i, 0, N) cin >> a[i];

        int count=0;
        forI(i, 1, N){
            if(a[i] > a[0]) count++;
        }
        
        cout << count << "\n";

    }
    



    return 0;
>>>>>>> 7ff84f2 (OK)
}