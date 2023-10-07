#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<=n; i++)

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    bool flag = false;

    int i, j;
    forI(i, 0, c/a){
        forI(j, 0, c/b){
            if(i*a + j*b == c){
                flag = true;
            }
        }
    }

    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}