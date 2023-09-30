#include<bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;

    if(abs(x - int(x)) >= 0.5) cout << ceil(x);
    else cout << floor(x);
    return 0;
}