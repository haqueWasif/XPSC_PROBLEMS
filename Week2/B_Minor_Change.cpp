<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string s, t; cin >> s >> t;
    
    int i, op=0;
    forI(i, 0, s.size()){
        if(s[i] != t[i]) op++;
    }

    cout << op << "\n";

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string s, t; cin >> s >> t;
    
    int i, op=0;
    forI(i, 0, s.size()){
        if(s[i] != t[i]) op++;
    }

    cout << op << "\n";

    return 0;
>>>>>>> 7ff84f2 (OK)
}