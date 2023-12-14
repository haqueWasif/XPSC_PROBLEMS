<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int 
using namespace std;

int main(){
    string s; cin >> s;

    ll n=0;
    
    ll i;
    forI(i, 0, s.size()){
        n += s[i] - '0';
    }

    ll res=0, op=1;
    while(!(n < 10)){
        res = 0;
        while(n > 0){
            res += (n % 10);
            n = n / 10;
        }
        n = res;
        op++;
    }

    if(s.size() == 1) cout << 0 << endl; 
    else cout << op << endl;
   

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int 
using namespace std;

int main(){
    string s; cin >> s;

    ll n=0;
    
    ll i;
    forI(i, 0, s.size()){
        n += s[i] - '0';
    }

    ll res=0, op=1;
    while(!(n < 10)){
        res = 0;
        while(n > 0){
            res += (n % 10);
            n = n / 10;
        }
        n = res;
        op++;
    }

    if(s.size() == 1) cout << 0 << endl; 
    else cout << op << endl;
   

    return 0;
>>>>>>> 7ff84f2 (OK)
}