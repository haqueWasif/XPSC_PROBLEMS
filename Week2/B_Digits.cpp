#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;

    string s;
    while(n > 0){
        n /= k;
        s += to_string((n%k));
    }

    cout << s.size() << "\n";

    return 0;
}