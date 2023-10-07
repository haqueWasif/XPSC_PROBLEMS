#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;

    int i =  ceil( (a*1.0) / c );
    int j = floor( (b*1.0) / c );

    if(i <= j) cout << i * c;
    else cout << -1;

    return 0;
}