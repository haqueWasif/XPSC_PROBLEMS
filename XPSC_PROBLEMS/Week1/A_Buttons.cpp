#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int mx=0;
    for(int i=1; i<=2; i++){
        if(a>b) {
            mx += a;
            a--;
        }
        else {
            mx += b; 
            b--;
        }
    }

    cout << mx;
    return 0;
}