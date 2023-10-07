#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    map<int, bool> mp;

    int n; cin >> n;
    while(n--){
        int pi; cin >> pi;
        if(mp[pi]) mp[pi] = false;
        else mp[pi] = true;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it -> second == true){
            cout << it -> first;
            break;
        }
    }

    return 0;
}