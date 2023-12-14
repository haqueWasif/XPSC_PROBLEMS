<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const string PI = "314159265358979323846264338327";

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int  t; cin >> t;
    while(t--){
        string num; cin >> num;
        
        int i, cnt=0;
        forI(i, 0, num.size()){
            if(PI[i] != num[i]) break;
            if(PI[i] == num[i]) cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

const string PI = "314159265358979323846264338327";

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int  t; cin >> t;
    while(t--){
        string num; cin >> num;
        
        int i, cnt=0;
        forI(i, 0, num.size()){
            if(PI[i] != num[i]) break;
            if(PI[i] == num[i]) cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}