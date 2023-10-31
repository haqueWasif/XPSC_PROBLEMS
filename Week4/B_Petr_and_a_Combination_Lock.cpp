#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int i, a[n], count=0;
    forI(i, 0, n){
        cin >> a[i];
        if(a[i] == 360/n) count++;
    }

    bool flag = false;
    if(count == n) flag = true;
    else{
        sort(a, a+n);

        int s=0;
        forI(i, 0, n-1){
            s += a[i];
        }

    }



    return 0;
}