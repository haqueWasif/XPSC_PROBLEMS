#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<=n; i++)

using namespace std;


int main(){
    int k, s; cin >> k >> s;

    map<int, int> mp;

    int x, y, z;
    forI(x, 0, k){
        forI(y, 0, k){
            mp[x+y]++;
        }
    }    
    
    int cnt=0;
    forI(z, 0, k){
        for(auto itr = mp.begin(); itr != mp.end(); itr++){
            if( (itr -> first + z) == s){
                cnt += itr -> second;
            }
        }
    }

    cout << cnt << endl;


    return 0;
}